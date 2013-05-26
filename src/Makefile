# File: Makefile
# Author: Yunqi Zhang
# Email: yqzhang@ucsd.edu

TOPDIR  := $(shell if [ "$$PWD" != "" ]; then echo $$PWD; else pwd; fi)/..

include $(TOPDIR)/config.mk
include $(TOPDIR)/rules.mk

DIRS=

ifeq ($(CONFIG_PFMLIB_ARCH_CRAYXT),y)
CFLAGS += -DCONFIG_PFMLIB_ARCH_CRAYXT
endif

CFLAGS+= -I. -D_GNU_SOURCE

PERF_EVENT_HDR=$(TOPDIR)/include/perfmon/pfmlib_perf_event.h

LPC_UTILS=perf_util.o
LPC_UTILS_HDR=perf_util.h

TARGETS+=onlineSch

$(TARGETS): driver.o scheduler.o profiler.o perf_util.o
	$(CC) $(CFLAGS) -o driver.c scheduler.c profiler.c -o onlineSch -lproc -g $(LDFLAGS) $< $(LPC_UTILS) $(PFMLIB) $(LIBS)

$(LPC_UTILS): $(LPC_UTILS_HDR)

clean:
	$(RM) *.o $(TARGETS) *~
