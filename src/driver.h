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

#include "scheduler.h"
#include "profiler.h"
#include "perf_util.h"

#define NUMBER_OF_CORES 4
#define THREAD_PER_CORE 2

#define MEASURE_PERIOD 10

int main (int argc, char **argv);
int initialize (perf_event_desc_t **all_fds, int *num_fds);
void measure (perf_event_desc_t **all_fds, int *num_fds, int ncpus, int period);
void cleanup (perf_event_desc_t **all_fds, int *num_fds, int ncpus);

#endif
