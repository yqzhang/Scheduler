/**
 * File: driver.h
 * Author: Yunqi Zhang
 * Email: yqzhang@ucsd.edu
 */

#ifndef _DRIVER_H_
#define _DRIVER_H_

#include <sys/types.h>
#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>
#include <sys/ioctl.h>
#include <err.h>
#include <stdbool.h>
#include <errno.h>
#include <fcntl.h>
#include <math.h>

#include "scheduler.h"
#include "profiler.h"
#include "perf_util.h"

#define NUMBER_OF_CORES 4
#define THREAD_PER_CORE 2

#define MEASURE_PERIOD 1000
#define MAX_GROUPS 16

#define MAX_ENERGY_COUNT 0xFFFFFFFF

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

#define MSR_RAPL_POWER_UNIT		0x606

#define CPU_NUM 8

typedef struct {
    const char *events;
    int num_groups;
} options_t;

static options_t options;

int main (int argc, char **argv);
int initialize ();
void measure (perf_event_desc_t **all_fds, int *num_fds, int ncpus, int period, int energy_fd);
void cleanup (perf_event_desc_t **all_fds, int *num_fds, int ncpus);
int open_msr (int core);
long long read_msr (int fd, int which);

#endif
