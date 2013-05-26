/**
 * File: profiler.h
 * Author: Yunqi Zhang
 * Email: yqzhang@ucsd.edu
 */

#ifndef _PROFILER_H_
#define _PROFILER_H_

#include <stdlib.h>

#include "perf_util.h"

/* Package RAPL Domain */
#define MSR_PKG_RAPL_POWER_LIMIT    0x610
#define MSR_PKG_ENERGY_STATUS       0x611
#define MSR_PKG_PERF_STATUS         0x613
#define MSR_PKG_POWER_INFO          0x614

/* RAPL UNIT BITMASK */
#define POWER_UNIT_OFFSET   0
#define POWER_UNIT_MASK     0x0F

#define ENERGY_UNIT_OFFSET  0x08
#define ENERGY_UNIT_MASK    0x1F00

#define TIME_UNIT_OFFSET    0x10
#define TIME_UNIT_MASK      0xF000

long long read_msr (int fd, int which);
void profile (perf_event_desc_t **all_fds, int *num_fds, int ncpus);

#endif
