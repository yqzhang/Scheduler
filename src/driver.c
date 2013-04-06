/**
 * File: driver.c
 * Author: Yunqi Zhang
 * Email: yqzhang@ucsd.edu
 */

#include "driver.h"

int main(int argc, char **argv) {
  if (argc < 3) {
    printf("Usage: ./driver <N <Number of threads: 2, 4, 8>>\n");
    printf("                <path <Path of the file contains the workloads>>\n");
    exit(1);
  }

  // Number of threads
  int N = atoi(argv[1]);
  if (N != 2 && N != 4 && N != 8) {
    printf("Error: Number of threads should be 2, 4, 8.\n");
    exit(1);
  }

  // Open the file contains workloads
  char* path = argv[2];
  FILE* file = fopen(path, "r");
  if (file == NULL) {
    printf("Error: The file %s doesn't exist or can't be opened.\n", path);
    //exit(1);
  }

  // Initialize the events to measure
  perf_event_desc_t **all_fds = NULL;
  int *num_fds = NULL;
  int ncpus = initialize(all_fds, num_fds);

  // Read the work load from file
  // simulate(N, file);
  measure(all_fds, num_fds, ncpus, MEASURE_PERIOD);

  return 0;
}

int initialize(perf_event_desc_t **all_fds, int *num_fds) {
  // TODO: The list of the events to measure
  const char *EVENTS = {"cycles"};
  // TODO: The list of the events to measure

  int ret = pfm_initialize();
  
  if (ret != PFM_SUCCESS) {
    return -1;
  }

  int ncpus = sysconf(_SC_NPROCESSORS_ONLN);
  all_fds = calloc (ncpus, sizeof(perf_event_desc_t));
  num_fds = calloc (ncpus, sizeof(int));

  int c, i;
  for (c = 0; c < ncpus; c++) {
    int ret = perf_setup_list_events(EVENTS, &all_fds[c], &num_fds[c]);
    all_fds[c][0].fd = -1;
    for (i = 0; i < num_fds[c]; i++) {
      all_fds[c][i].hw.disabled = 0;
      all_fds[c][i].hw.read_format = PERF_FORMAT_SCALE;
      all_fds[c][i].fd = perf_event_open(&all_fds[c][i].hw, -1, c, -1, 0);
      printf("CPU: %d, RET: %d, NUM_FDS: %d, fd:%d\n", c, ret, num_fds[c], all_fds[c][i].fd);

    }
    //printf("CPU: %d, RET: %d, NUM_FDS: %d\n", c, ret, num_fds[c]);
  }

  return ncpus;
}

void measure (perf_event_desc_t **all_fds, int *num_fds, int ncpus, int period) {

  // Doing a profiling and a re-scheduling each period of time
  while (period--) {
    sleep(10);

    // First step: profiling
    profile (all_fds, num_fds, ncpus);

    // Second step: re-scheduling based on the profiling
    schedule (all_fds, num_fds, ncpus);
  }
}

void cleanup (perf_event_desc_t **all_fds, int *num_fds, int ncpus) {
  int i, c;

  for (c = 0; c < ncpus; c++) {
    for (i = 0; i < num_fds[c]; i++) {
      close(all_fds[c][i].fd);
    }
    perf_free_fds(all_fds[c], num_fds[c]);
  }

  return ;
}
