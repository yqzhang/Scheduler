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
