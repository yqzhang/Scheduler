/**
 * File: profiler.c
 * Author: Yunqi Zhang
 * Email: yqzhang@ucsd.edu
 */

#include "profiler.h"

static void
read_groups(perf_event_desc_t *fds, int num)
{
	uint64_t *values = NULL;
	size_t new_sz, sz = 0;
	int i, evt;
	ssize_t ret;

	/*
	 * 	{ u64		nr;
	 * 	  { u64		time_enabled; } && PERF_FORMAT_ENABLED
	 * 	  { u64		time_running; } && PERF_FORMAT_RUNNING
	 * 	  { u64		value;
	 * 	    { u64	id;           } && PERF_FORMAT_ID
	 * 	  }		cntr[nr];
	 * 	} && PERF_FORMAT_GROUP
	 *
	 * we do not use FORMAT_ID in this program
	 */

	for (evt = 0; evt < num; ) {
		int num_evts_to_read;

		num_evts_to_read = 1;
		new_sz = sizeof(uint64_t) * 3;

		if (new_sz > sz) {
			sz = new_sz;
			values = realloc(values, sz);
		}

		if (!values)
			err(1, "cannot allocate memory for values\n");

		ret = read(fds[evt].fd, values, new_sz);
		if (ret != (ssize_t)new_sz) { /* unsigned */
			if (ret == -1)
				err(1, "cannot read values event %s", fds[evt].name);

			/* likely pinned and could not be loaded */
			warnx("could not read event %d, tried to read %zu bytes, but got %zd",
				evt, new_sz, ret);
		}

		/*
		 * propagate to save area
		 */
		for (i = evt; i < (evt + num_evts_to_read); i++) {
			/*
			 * scaling because we may be sharing the PMU and
			 * thus may be multiplexed
			 */
			fds[i].values[0] = values[0];
			fds[i].values[1] = values[1];
			fds[i].values[2] = values[2];
		}
		evt += num_evts_to_read;
	}
	if (values)
		free(values);
}


void profile (perf_event_desc_t **all_fds, int *num_fds, int ncpus) {
  int c, i;
  perf_event_desc_t *fds;

  for (c = 0; c < ncpus; c++) {
    fds = all_fds[c];
    read_groups(fds, num_fds[c]);

    for (i = 0; i < num_fds[c]; i++) {
      uint64_t val, delta;
      double ratio;

      // Scaling because we may sharing the PMU
      // and thus may be multiplexed
      val = perf_scale (fds[i].values);
      ratio = perf_scale_ratio (fds[i].values);
      delta = perf_scale_delta (fds[i].values, fds[i].prev_values);
	  printf("%'20"PRIu64" %'20"PRIu64" %s (%.2f%% scaling, ena=%'"PRIu64", run=%'"PRIu64")\n",
			val,
			delta,
			fds[i].name,
			(1.0-ratio)*100.0,
			fds[i].values[1],
			fds[i].values[2]);

      // Might print something out here if something go wrong

      // Set the values of the previous read
      fds[i].prev_values[0] = fds[i].values[0];
      fds[i].prev_values[1] = fds[i].values[1];
      fds[i].prev_values[2] = fds[i].values[2];
    }
  }

  return ;
}
