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

  // TODO: Calculate the best migration solution
  //       Brute force

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
