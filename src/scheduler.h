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
#include <stdlib.h>

#include "perf_util.h"

#define NUMBER_OF_CORES 4
#define THREAD_PER_CORE 2

#define CPU_NUM 8

#define MAX_RUNNING_PROCESS CPU_SETSIZE

struct proc {
  int pid;
  int affinity;
  int migrate;
};

typedef struct proc process;

void schedule(perf_event_desc_t **all_fds, int *num_fds, int ncpus,
              double pmu_matrix[][10]);
int getRunningProcess();
bool filter(char *str1);
inline int getNext(bool ifUsed[], int offset);
void swap(int *a, int *b);
int findCeil(int perm[], int first, int l, int h);
void reverse(int perm[], int l, int h);
int calculateMigration(int map[], int perm[], int num_proc);

#endif
