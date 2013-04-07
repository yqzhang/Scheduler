/**
 * File: scheduler.h
 * Author: Yunqi Zhang
 * Email: yqzhang@ucsd.edu
 */

#ifndef _SCHEDULER_H_
#define _SCHEDULER_H_

#include <proc/readproc.h>
#include <string.h>
#include <stdbool.h>
#include <sched.h>

#include "perf_util.h"

#define MAX_RUNNING_PROCESS CPU_SETSIZE

struct proc {
  int pid;
  int affinity;
  int migrate;
};

typedef struct proc process;

void schedule (perf_event_desc_t **all_fds, int *num_fds, int ncpus);
int getRunningProcess ();
bool filter (char *str1);
int mask2int (cpu_set_t *mask);
inline int getNext (bool ifUsed[], int offset);

#endif
