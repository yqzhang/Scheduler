/**
 * File: driver.c
 * Author: Yunqi Zhang
 * Email: yqzhang@ucsd.edu
 */

#include "driver.h"

perf_event_desc_t **all_fds = NULL;
int *num_fds = NULL;

int main(int argc, char **argv) {
  // Initialize the events to measure
  int ncpus = initialize();

  // Read the work load from file
  int time_period = MEASURE_PERIOD;
  measure(all_fds, num_fds, ncpus, time_period);

  // Clean up
  cleanup (all_fds, num_fds, ncpus);

  return 0;
}

void
setup_cpu(int cpu)
{
	perf_event_desc_t *fds;
	int i, ret;

	ret = perf_setup_list_events(options.events, &all_fds[cpu], &num_fds[cpu]);
	if (ret || (num_fds == 0))
		errx(1, "cannot setup events\n");
	fds = all_fds[cpu]; /* temp */

	fds[0].fd = -1;
	for(i=0; i < num_fds[cpu]; i++) {
		fds[i].hw.disabled = 1;

		/* request timing information necessary for scaling counts */
		fds[i].hw.read_format = PERF_FORMAT_SCALE;
		fds[i].fd = perf_event_open(&fds[i].hw, -1, cpu, -1, 0);
		if (fds[i].fd == -1)
			err(1, "cannot attach event to CPU%d %s", cpu, fds[i].name);
	}
}

int initialize() {
  // TODO: The list of the events to measure
  options.events = "instructions,cycles,DTLB_LOAD_MISSES:MISS_CAUSES_A_WALK,iTLB-load-misses,MISPREDICTED_BRANCH_RETIRED,L1-icache-load-misses,MEM_LOAD_RETIRED:L1_HIT,MEM_LOAD_RETIRED:L2_HIT,MEM_LOAD_RETIRED:L3_HIT,LLC_MISSES";
  // TODO: The list of the events to measure

  int ret = pfm_initialize();
  
  if (ret != PFM_SUCCESS) {
    return -1;
  }

  int ncpus = sysconf(_SC_NPROCESSORS_ONLN);
  all_fds = calloc (ncpus, sizeof(perf_event_desc_t));
  num_fds = calloc (ncpus, sizeof(int));

  int i, c;
  for (c = 0; c < ncpus; c++) {
    setup_cpu(c);
  }

  for (c = 0; c < ncpus; c++) {
    for (i = 0; i < num_fds[c]; i++) {
      ret = ioctl(all_fds[c][i].fd, PERF_EVENT_IOC_ENABLE, 0);
      if (ret)
        err(1, "cannot enable event %s\n", all_fds[c][i].name);
    }
  }

  return ncpus;
}

void measure (perf_event_desc_t **all_fds, int *num_fds, int ncpus, int period) {
  // Doing a profiling and a re-scheduling each period of time
  while (period--) {
    sleep(1);

    // First step: profiling
    profile (all_fds, num_fds, ncpus);

    // Second step: re-scheduling based on the profiling
    schedule (all_fds, num_fds, ncpus);
    printf("Schedule\n");
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
