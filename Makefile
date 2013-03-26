CC = gcc
CCFLAGS =

onlineSch: driver.o scheduler.o profiler.o
					 ${CC} ${CCFLAGS} driver.o scheduler.o profiler.o -o onlineSch

driver.o: driver.c driver.h
					${CC} ${CCFLAGS} -c driver.c

scheduler.o: scheduler.c scheduler.h
						 ${CC} ${CCFLAGS} -c scheduler.c

profiler.o: profiler.c profiler.h
						${CC} ${CCFLAGS} -c profiler.c

clean:
			 rm -f *.o onlineSch

