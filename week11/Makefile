CC=gcc
CFLAGS=-Wall -Werror -g
OBJS=tlab.o Tree.o
BINS = tlab readLog

all: $(BINS)

tlab : $(OBJS)
	$(CC) -o tlab $(OBJS)

readLog : readLog.o
	$(CC) -o readLog readLog.o

tlab.o : tlab.c Tree.h

Tree.o : Tree.c Tree.h

readLog.o : readLog.c

clean :
	rm -f *.o core
