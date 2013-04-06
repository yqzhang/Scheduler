/**
 * File: profiler.c
 * Author: Yunqi Zhang
 * Email: yqzhang@ucsd.edu
 */

#include "profiler.h"

void profile (perf_event_desc_t **all_fds, int *num_fds, int ncpus) {
  int c, i, ret;
  perf_event_desc_t *fds;

  for (c = 0; c < ncpus; c++) {
    fds = all_fds[c];

    for (i = 0; i < num_fds[c]; i++) {
      //uint64_t val, delta;
      //double ratio;

      ret = read (fds[i].fd, fds[i].values, sizeof(fds[i].values));

      // Check if there is error occurred
      if (ret != sizeof(fds[i].values)) {
        if (ret == -1)
          printf("[ERROR] Cannot read event %d:%d\n", i, ret);
        else
          printf("[ERROR] Cannot read event %d\n", i);
      }

      // Scaling because we may sharing the PMU
      // and thus may be multiplexed
      //val = perf_scale (fds[i].values);
      //ratio = perf_scale_ratio (fds[i].values);
      //delta = perf_scale_delta (fds[i].values, fds[i].prev_values);

      // Might print something out here if something go wrong

      // Set the values of the previous read
      fds[i].prev_values[0] = fds[i].values[0];
      fds[i].prev_values[1] = fds[i].values[1];
      fds[i].prev_values[2] = fds[i].values[2];
    }
  }

  return ;
}
