/**
 * File scheduler.c
 * Author: Yunqi Zhang
 * Email: yqzhang@ucsd.edu
 */

#include "scheduler.h"

static process proc_list[MAX_RUNNING_PROCESS];
static float benefit_matrix[CPU_SETSIZE][CPU_SETSIZE];

void schedule (perf_event_desc_t **all_fds, int *num_fds, int ncpus) {
  int num_proc = getRunningProcess();

  int i, j;
  cpu_set_t cmask;

  // Get process affinity
  for (i = 0; i < num_proc; i++) {
    CPU_ZERO (&cmask);
    sched_getaffinity (proc_list[i].pid, sizeof(cpu_set_t), &cmask);
    proc_list[i].affinity = mask2int (&cmask);
  }

  // Calculate the benefit matrix
  // Regression model
  for (i = 0; i < CPU_SETSIZE; i++) {
    for (j = 0; j < CPU_SETSIZE; j++) {
      // TODO: Result of the regression model
      benefit_matrix[i][j] = 1.0;
    }
  }

  // Calculate the best mapping
  // Brute force
  // TODO
  bool ifUsed[CPU_SETSIZE];
  int best_sol = 0;
  float best_val = -10000.0;
  for (i = 0; i < 105; i++) {
    float cur_val = 0.0;
    for (j = 0; j < CPU_SETSIZE; j++) ifUsed[j] = false;
    
    // 1st Core
    int left = getNext (ifUsed, 0);
    int right = getNext (ifUsed, i / 15);
    cur_val += benefit_matrix[left][right] + benefit_matrix[right][left];

    // 2nd Core
    left = getNext (ifUsed, 0);
    right = getNext (ifUsed, (i % 15) / 3);
    cur_val += benefit_matrix[left][right] + benefit_matrix[right][left];

    // 3rd Core
    left = getNext (ifUsed, 0);
    right = getNext (ifUsed, ((i % 15) % 3));
    cur_val += benefit_matrix[left][right] + benefit_matrix[right][left];

    // 4th Core
    left = getNext(ifUsed, 0);
    right = getNext(ifUsed, 0);
    cur_val += benefit_matrix[left][right] + benefit_matrix[right][left];

    if (cur_val > best_val) {
      best_val = cur_val;
      best_sol = i;
    }
  }

  int map[CPU_SETSIZE];
  for (j = 0; j < CPU_SETSIZE; j++) ifUsed[j] = false;
  map[getNext (ifUsed, 0)] = 0;
  map[getNext (ifUsed, best_sol / 15)] = 0;
  map[getNext (ifUsed, 0)] = 1;
  map[getNext (ifUsed, (best_sol % 15) / 3)] = 1;
  map[getNext (ifUsed, 0)] = 2;
  map[getNext (ifUsed, ((best_sol % 15) % 3))] = 2;
  map[getNext (ifUsed, 0)] = 3;
  map[getNext (ifUsed, 0)] = 3;

  // Calculate the best migration solution
  // Brute force
  int perm[] = {0, 1, 2, 3};
  int best_mig[] = {0, 1, 2, 3};
  bool ifFinished = false;
  int minMigration = CPU_SETSIZE;
  while (ifFinished) {
    int mig = calculateMigration (map, perm, num_proc);
    if (mig < minMigration) {
      minMigration = mig;
      best_mig[0] = perm[0];
      best_mig[1] = perm[1];
      best_mig[2] = perm[2];
      best_mig[3] = perm[3];
    }

    for (i = CPU_SETSIZE / 2 - 2; i >= 0; i--) {
      if (perm[i] < perm[i + 1]) {
        break;
      }
    }

    if (i == -1) ifFinished = true;
    else {
      int ceilIndex = findCeil (perm, perm[i], i + 1, CPU_SETSIZE - 1);
      swap (&perm[i], &perm[ceilIndex]);
      reverse (perm, i + 1, CPU_SETSIZE - 1);
    }
  }

  // Calculate affinity
  for (i = 0; i < CPU_SETSIZE; i++) ifUsed[i] = false;
  for (i = 0; i < num_proc; i++) {
    if (proc_list[i].affinity % (CPU_SETSIZE / 2) == best_mig[map[i]]) {
      ifUsed[proc_list[i].affinity] = true;
      proc_list[i].migrate = proc_list[i].affinity;
    }
  }
  for (i = 0; i < num_proc; i++) {
    if (proc_list[i].affinity % (CPU_SETSIZE / 2) != best_mig[map[i]]) {
      if (ifUsed[best_mig[map[i]]] == false) {
        ifUsed[best_mig[map[i]]] = true;
        proc_list[i].migrate = best_mig[map[i]];
      }
      else {
        ifUsed[best_mig[map[i]] + (CPU_SETSIZE / 2)] = true;
        proc_list[map[i]].migrate = best_mig[map[i]] + (CPU_SETSIZE / 2);
      }
    }
  }

  // Set process affinity
  for (i = 0; i < num_proc; i++) {
    if (proc_list[i].migrate != proc_list[i].affinity) {
      CPU_ZERO (&cmask);
      CPU_SET (proc_list[i].migrate, &cmask);
      sched_setaffinity (proc_list[i].pid, sizeof(cpu_set_t), &cmask);
    }
  }

  return ;
}

int getRunningProcess () {
  PROCTAB *proc = openproc(PROC_FILLMEM | PROC_FILLSTAT | PROC_FILLSTATUS);
  proc_t proc_info;

  memset (&proc_info, 0, sizeof(proc_info));

  int num_proc = 0;
  while (readproc (proc, &proc_info) != NULL) {
    if (filter (proc_info.cmd) && proc_info.state == 'R') {
      //printf("%s\n", proc_info.cmd);
      proc_list[num_proc++].pid = proc_info.tid;
    }
  }

  closeproc (proc);

  return num_proc;
}

bool filter (char *str1) {
  if (strstr (str1, "onlineSch") != NULL)
    return false;
  //if (strstr (str1, "base") == NULL)
  //  return false;

  return true;
}

int mask2int (cpu_set_t *cmask) {
  int i;

  for (i = 0; i < CPU_SETSIZE; i++) {
    if (CPU_ISSET (i, cmask)) {
      return i;
    }
  }

  return -1;
}

inline int getNext (bool ifUsed[], int offset) {
  int from = 0;
  while (ifUsed[from] == true) from++;
  for ( ; offset > 0; from++) {
    if (ifUsed[from] == false) {
      offset--;
    }
  }
  ifUsed[from] = true;
  return from;
}

void swap (int *a, int *b) {
  char t = *a;
  *a = *b;
  *b = t;
}

int findCeil (int perm[], int first, int l, int h) {
  int i, ceilIndex = l;
  for (i = l + 1; i <= h; i++) {
    if (perm[i] > first && perm[i] < perm[ceilIndex]) {
      ceilIndex = i;
    }
  }
  return ceilIndex;
}

void reverse (int perm[], int l, int h) {
  while (l < h) {
    swap (&perm[l], &perm[h]);
    l++;
    h--;
  }
}

int calculateMigration (int map[], int perm[], int num_proc) {
  int mig = 0;
  int i;
  for (i = 0; i < num_proc; i++) {
    if (proc_list[i].affinity % (CPU_SETSIZE / 2) != perm[map[i]]) {
      mig++;
    }
  }
  return mig;
}
