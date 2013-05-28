/**
 * File: driver.c
 * Author: Yunqi Zhang
 * Email: yqzhang@ucsd.edu
 */

#include "driver.h"

perf_event_desc_t **all_fds = NULL;
int *num_fds = NULL;
static double pmu_matrix[CPU_NUM][10];

int main(int argc, char **argv) {
  // Initialize the events to measure
  int ncpus = initialize();

  // Read the work load from file
  int time_period = MEASURE_PERIOD;
  int energy_fd = open_msr(0);
  measure(all_fds, num_fds, ncpus, time_period, energy_fd);

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

void measure (perf_event_desc_t **all_fds, int *num_fds, int ncpus, int period, int energy_fd) {
  // Read msr for power information
  double energy_units;//, power_units, time_units;
  long long result, result_before, result_after;
  int64_t result_delta;
  double package_power = 0;

  result = read_msr (energy_fd, MSR_RAPL_POWER_UNIT);
  //power_units = pow (0.5, (double)(result & 0xf));
  energy_units = pow (0.5, (double)((result >> 8) & 0x1f));
  //time_units = pow (0.5, (double)((result >> 16) & 0xf));

  // Get the original numbers for power
  result_before = read_msr(energy_fd, MSR_PKG_ENERGY_STATUS);

  // Doing a profiling and a re-scheduling each period of time
  while (period--) {
    sleep(1);

    // First step: profiling
    profile (all_fds, num_fds, ncpus, pmu_matrix);

    // Second step: re-scheduling based on the profiling
    schedule (all_fds, num_fds, ncpus, pmu_matrix);

    // Third step: read msr for energy
    result_after = read_msr(energy_fd, MSR_PKG_ENERGY_STATUS);
    if (result_after < result_before) {
        result_delta = (int64_t) result_after + (int64_t) (MAX_ENERGY_COUNT - result_before);
    }
    else {
        result_delta = (int64_t) result_after - (int64_t) result_before;
    }
    package_power += (double) result_delta * energy_units;
    printf("[LOG] total energy consumption: %.6fJ consumed\n", package_power);
    result_before = result_after;
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

int open_msr (int core) {
    char msr_filename[BUFSIZ];
    int fd;

    sprintf(msr_filename, "/dev/cpu/%d/msr", core);
    fd = open (msr_filename, O_RDONLY);
    if (fd < 0) {
        if (errno == ENXIO) {
            fprintf (stderr, "rdmsr: No CPU %d\n", core);
            exit(2);
        } else if (errno == EIO) {
            fprintf(stderr, "rdmsr: CPU %d doesn't support MSRs\n", core);
            exit(3);
        } else {
            perror("rdmsr:open");
            fprintf(stderr, "Trying to open %s\n", msr_filename);
            exit(127);
        }
    }

    return fd;
}

long long read_msr (int fd, int which) {
    uint64_t data;

    if ( pread(fd, &data, sizeof(data), which) != sizeof(data) ) {
        perror("rdmsr:pread");
        exit(127);
    }
    
    return (long long) data;
}
