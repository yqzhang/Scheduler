#ifndef _DRIVER_H_
#define _DRIVER_H_

#include <stdio.h>
#include <stdlib.h>

#include "scheduler.h"
#include "profiler.h"

#define NUMBER_OF_CORES 4
#define THREAD_PER_CORE 2

int main (int argc, char **argv);
void simulate (int N, FILE *file);

#endif
