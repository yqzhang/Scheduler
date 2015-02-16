/**
 * File scheduler.c
 * Author: Yunqi Zhang
 * Email: yqzhang@ucsd.edu
 */

#include "scheduler.h"
#include "regression.h"

static process proc_list[MAX_RUNNING_PROCESS];
static float benefit_matrix[CPU_NUM][CPU_NUM];

void schedule(perf_event_desc_t **all_fds, int *num_fds, int ncpus,
              double pmu_matrix[][10]) {
  int num_proc = getRunningProcess();

  int i, j;
  cpu_set_t cmask;

  // Calculate the benefit matrix
  // Regression model
  for (i = 0; i < CPU_NUM; i++) {
    for (j = 0; j < CPU_NUM; j++) {
      // TODO: Result of the regression model
      if (i >= num_proc || j >= num_proc || i == j) {
        benefit_matrix[i][j] = 1;
        continue;
      }

      int left = proc_list[i].affinity;
      int right = proc_list[j].affinity;

      if (proc_list[i].affinity % NUMBER_OF_CORES ==
          proc_list[j].affinity % NUMBER_OF_CORES) {
        // call smt regression
        benefit_matrix[i][j] =
            regression_smt(pmu_matrix[left][2] / pmu_matrix[left][1],
                           pmu_matrix[left][3] / pmu_matrix[left][1],
                           pmu_matrix[left][4] / pmu_matrix[left][1],
                           pmu_matrix[left][5] / pmu_matrix[left][1],
                           pmu_matrix[left][6] / pmu_matrix[left][1],
                           pmu_matrix[left][7] / pmu_matrix[left][1],
                           pmu_matrix[left][8] / pmu_matrix[left][1],
                           pmu_matrix[left][9] / pmu_matrix[left][1],
                           pmu_matrix[right][2] / pmu_matrix[right][1],
                           pmu_matrix[right][3] / pmu_matrix[right][1],
                           pmu_matrix[right][4] / pmu_matrix[right][1],
                           pmu_matrix[right][5] / pmu_matrix[right][1],
                           pmu_matrix[right][6] / pmu_matrix[right][1],
                           pmu_matrix[right][7] / pmu_matrix[right][1],
                           pmu_matrix[right][8] / pmu_matrix[right][1],
                           pmu_matrix[right][9] / pmu_matrix[right][1]) *
            1.04;
      } else {
        // call cmp regression
        benefit_matrix[i][j] =
            regression_cmp(pmu_matrix[left][2] / pmu_matrix[left][1],
                           pmu_matrix[left][3] / pmu_matrix[left][1],
                           pmu_matrix[left][4] / pmu_matrix[left][1],
                           pmu_matrix[left][5] / pmu_matrix[left][1],
                           pmu_matrix[left][6] / pmu_matrix[left][1],
                           pmu_matrix[left][7] / pmu_matrix[left][1],
                           pmu_matrix[left][8] / pmu_matrix[left][1],
                           pmu_matrix[left][9] / pmu_matrix[left][1],
                           pmu_matrix[right][2] / pmu_matrix[right][1],
                           pmu_matrix[right][3] / pmu_matrix[right][1],
                           pmu_matrix[right][4] / pmu_matrix[right][1],
                           pmu_matrix[right][5] / pmu_matrix[right][1],
                           pmu_matrix[right][6] / pmu_matrix[right][1],
                           pmu_matrix[right][7] / pmu_matrix[right][1],
                           pmu_matrix[right][8] / pmu_matrix[right][1],
                           pmu_matrix[right][9] / pmu_matrix[right][1]) *
            0.98;
      }
    }
  }

  for (i = 0; i < CPU_NUM; i++) {
    printf("\t\t[BENEFIT MATRIX %d]: ", i);
    for (j = 0; j < CPU_NUM; j++) {
      printf("%.2lf\t", benefit_matrix[i][j]);
    }
    printf("\n");
  }

  /* print the pmu counters for debug */
  /*
  printf("---------------------------------------\n");
  for (i = 0; i < CPU_NUM; i++) {
    for (j = 0; j < 10; j++) {
      printf("PMU_%d: %.0lf\t", j, pmu_matrix[i][j]);
    }
    printf("\n");
  }
  printf("---------------------------------------\n");
  */
  /* print the pmu counters for dubug */

  // Calculate the best mapping
  // Brute force
  // TODO
  bool ifUsed[CPU_NUM];
  int best_sol = 0;
  float best_val = 10000.0;
  float power = 0;
  float best_power = 0;
  for (i = 0; i < 105; i++) {
    power = 36.0;
    float cur_val = 0.0;
    for (j = 0; j < CPU_NUM; j++) ifUsed[j] = false;

    // 1st Core
    int left = getNext(ifUsed, 0);
    int right = getNext(ifUsed, i / 15);
    if (left < num_proc && right < num_proc)
      power += 7.3;
    else if (left < num_proc || right < num_proc)
      power += 6.0;
    if (left < num_proc) cur_val += benefit_matrix[left][right];
    if (right < num_proc) cur_val += benefit_matrix[right][left];

    // 2nd Core
    left = getNext(ifUsed, 0);
    right = getNext(ifUsed, (i % 15) / 3);
    if (left < num_proc && right < num_proc)
      power += 7.3;
    else if (left < num_proc || right < num_proc)
      power += 6.0;
    if (left < num_proc) cur_val += benefit_matrix[left][right];
    if (right < num_proc) cur_val += benefit_matrix[right][left];

    // 3rd Core
    left = getNext(ifUsed, 0);
    right = getNext(ifUsed, ((i % 15) % 3));
    if (left < num_proc && right < num_proc)
      power += 7.3;
    else if (left < num_proc || right < num_proc)
      power += 6.0;
    if (left < num_proc) cur_val += benefit_matrix[left][right];
    if (right < num_proc) cur_val += benefit_matrix[right][left];

    // 4th Core
    left = getNext(ifUsed, 0);
    right = getNext(ifUsed, 0);
    if (left < num_proc && right < num_proc)
      power += 7.3;
    else if (left < num_proc || right < num_proc)
      power += 6.0;
    if (left < num_proc) cur_val += benefit_matrix[left][right];
    if (right < num_proc) cur_val += benefit_matrix[right][left];

    cur_val *= power;

    if (cur_val < best_val) {
      best_val = cur_val;
      best_sol = i;
      best_power = power;
    }
  }

  printf("\t\t[BEST] best solution: %lf under power %lf \n", best_val,
         best_power);

  int map[CPU_NUM];
  for (j = 0; j < CPU_NUM; j++) ifUsed[j] = false;
  map[getNext(ifUsed, 0)] = 0;
  map[getNext(ifUsed, best_sol / 15)] = 0;
  map[getNext(ifUsed, 0)] = 1;
  map[getNext(ifUsed, (best_sol % 15) / 3)] = 1;
  map[getNext(ifUsed, 0)] = 2;
  map[getNext(ifUsed, ((best_sol % 15) % 3))] = 2;
  map[getNext(ifUsed, 0)] = 3;
  map[getNext(ifUsed, 0)] = 3;
  /*
    printf("\t\t[MAP]: ");
    for (i = 0; i < 8; i++) {
      printf(" %d - %d,", i, map[i]);
    }
    printf("\n");
  */
  // Calculate the best migration solution
  // Brute force
  int perm[24][4] = {{0, 1, 2, 3},
                     {0, 1, 3, 2},
                     {0, 2, 1, 3},
                     {0, 2, 3, 1},
                     {0, 3, 1, 2},
                     {0, 3, 2, 1},
                     {1, 0, 2, 3},
                     {1, 0, 3, 2},
                     {1, 2, 0, 3},
                     {1, 2, 3, 0},
                     {1, 3, 0, 2},
                     {1, 3, 2, 0},
                     {2, 0, 1, 3},
                     {2, 0, 3, 1},
                     {2, 1, 0, 3},
                     {2, 1, 3, 0},
                     {2, 3, 0, 1},
                     {2, 3, 1, 0},
                     {3, 0, 1, 2},
                     {3, 0, 2, 1},
                     {3, 1, 0, 2},
                     {3, 1, 2, 0},
                     {3, 2, 0, 1},
                     {3, 2, 1, 0}};
  int best_mig[] = {0, 1, 2, 3};
  int minMigration = CPU_NUM;
  for (i = 0; i < 24; i++) {
    int mig = calculateMigration(map, perm[i], num_proc);
    if (mig < minMigration) {
      minMigration = mig;
      best_mig[0] = perm[i][0];
      best_mig[1] = perm[i][1];
      best_mig[2] = perm[i][2];
      best_mig[3] = perm[i][3];
    }
  }
  /*
    printf("\t\t[MIGRATION]: ");
    for (i = 0; i < 4; i++) {
      printf(" %d - %d,", i, best_mig[i]);
    }
    printf("\n");
  */
  // Calculate affinity
  for (i = 0; i < CPU_NUM; i++) ifUsed[i] = false;
  for (i = 0; i < CPU_NUM; i++) proc_list[i].migrate = -1;
  for (i = 0; i < num_proc; i++) {
    if (proc_list[i].affinity % (CPU_NUM / 2) == best_mig[map[i]]) {
      ifUsed[proc_list[i].affinity] = true;
      proc_list[i].migrate = proc_list[i].affinity;
    }
  }
  /*
    printf("\t\t[IFUSED]: ");
    for (i = 0; i < 8; i++) {
      printf(" %d - %d,", i, ifUsed[i]);
    }
    printf("\n");
    printf("\t\t[PRE-SCHEDULE]: ");
    for (i = 0; i < 8; i++) {
      printf(" %d - %d,", i, proc_list[i].migrate);
    }
    printf("\n");
  */
  for (i = 0; i < num_proc; i++) {
    if (proc_list[i].migrate == -1) {
      if (ifUsed[best_mig[map[i]]] == false) {
        ifUsed[best_mig[map[i]]] = true;
        proc_list[i].migrate = best_mig[map[i]];
      } else {
        ifUsed[best_mig[map[i]] + (CPU_NUM / 2)] = true;
        proc_list[i].migrate = best_mig[map[i]] + (CPU_NUM / 2);
      }
    }
  }
  /*
    printf("\t\t[IFUSED]: ");
    for (i = 0; i < 8; i++) {
      printf(" %d - %d,", i, ifUsed[i]);
    }
    printf("\n");
    printf("\t\t[SCHEDULE]: ");
    for (i = 0; i < 8; i++) {
      printf(" %d - %d,", i, proc_list[i].migrate);
    }
    printf("\n");
  */
  // Set process affinity
  for (i = 0; i < num_proc; i++) {
    //
    // proc_list[i].migrate = 1 - proc_list[i].affinity;
    //
    // printf ("affinity: %d, migrate: %d\n", proc_list[i].affinity,
    // proc_list[i].migrate);
    if (proc_list[i].migrate != proc_list[i].affinity) {
      CPU_ZERO(&cmask);
      CPU_SET(proc_list[i].migrate, &cmask);
      sched_setaffinity(proc_list[i].pid, sizeof(cpu_set_t), &cmask);
      printf("\t[PROCESS] process %d re-schedule from %d to %d\n",
             proc_list[i].pid, proc_list[i].affinity, proc_list[i].migrate);
    }
  }

  return;
}

int getRunningProcess() {
  PROCTAB *proc = openproc(PROC_FILLMEM | PROC_FILLSTAT | PROC_FILLSTATUS);
  proc_t proc_info;

  memset(&proc_info, 0, sizeof(proc_info));

  int num_proc = 0;
  while (readproc(proc, &proc_info) != NULL) {
    if (filter(proc_info.cmd) && proc_info.state == 'R') {
      // printf("%d\n", proc_info.processor);
      proc_list[num_proc].affinity = proc_info.processor;
      proc_list[num_proc++].pid = proc_info.tid;
      printf("\t[PROCESS] process %s with pid %d is running on %d\n",
             proc_info.cmd, proc_info.tid, proc_info.processor);
    }
  }

  closeproc(proc);

  return num_proc;
}

/* This might be what you are looking for */
bool filter(char *str1) {
  /* return false for the thread you don't want to touch */
  /* return true for the thread you want to schedule */
  if (strstr(str1, "onlineSch") != NULL) return false;
  if (strstr(str1, "base") != NULL) return true;
  if (strstr(str1, "sphinx") != NULL) return true;
  return false;
}
/* This might be what you are looking for */

inline int getNext(bool ifUsed[], int offset) {
  int from = 0;
  while (ifUsed[from] == true) from++;
  for (; offset > 0; from++) {
    if (ifUsed[from] == false) {
      offset--;
    }
  }
  ifUsed[from] = true;
  return from;
}

void swap(int *a, int *b) {
  char t = *a;
  *a = *b;
  *b = t;
}

int findCeil(int perm[], int first, int l, int h) {
  int i, ceilIndex = l;
  for (i = l + 1; i <= h; i++) {
    if (perm[i] > first && perm[i] < perm[ceilIndex]) {
      ceilIndex = i;
    }
  }
  return ceilIndex;
}

void reverse(int perm[], int l, int h) {
  while (l < h) {
    swap(&perm[l], &perm[h]);
    l++;
    h--;
  }
}

int calculateMigration(int map[], int perm[], int num_proc) {
  int mig = 0;
  int i;
  for (i = 0; i < num_proc; i++) {
    if (proc_list[i].affinity % (CPU_NUM / 2) != perm[map[i]]) {
      mig++;
    }
  }
  return mig;
}
