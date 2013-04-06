/**
 * File: scheduler.h
 * Author: Yunqi Zhang
 * Email: yqzhang@ucsd.edu
 */

#ifndef _SCHEDULER_H_
#define _SCHEDULER_H_

#include <proc/readproc.h>

#include "perf_util.h"

void schedule(perf_event_desc_t **all_fds, int *num_fds, int ncpus);

#endif
