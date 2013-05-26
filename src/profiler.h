/**
 * File: profiler.h
 * Author: Yunqi Zhang
 * Email: yqzhang@ucsd.edu
 */

#ifndef _PROFILER_H_
#define _PROFILER_H_

#include <stdlib.h>

#include "perf_util.h"

void profile (perf_event_desc_t **all_fds, int *num_fds, int ncpus);

#endif
