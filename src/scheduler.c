/**
 * File scheduler.c
 * Author: Yunqi Zhang
 * Email: yqzhang@ucsd.edu
 */

#include "scheduler.h"

static process proc_list[MAX_RUNNING_PROCESS];

void schedule (perf_event_desc_t **all_fds, int *num_fds, int ncpus) {
  int num_proc = getRunningProcess();

  int i;
  cpu_set_t cmask;
  for (i = 0; i < num_proc; i++) {
    sched_setaffinity (proc_list[i].pid, ncpus, &cmask);
    printf("affinity: %ld\n", (unsigned long int)cmask.__bits[0]);//mask2int (cmask, ncpus));
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
      printf("%s", proc_info.cmd);
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

int mask2int (cpu_set_t mask, int ncpus) {
  int i;
  for (i = 0; i < ncpus; i++) {
    if (mask.__bits[i] == 1) {
      return i;
    }
  }

  return -1;
}
