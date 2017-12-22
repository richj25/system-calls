CC=/usr/bin/gcc
CFLAGS= -g -Wall

OBJS = open \
	   creat \
	   read

all: $(OBJS)

open: open.c
	$(CC) $(CFLAGS) -o open open.c
	
creat: creat.c
	$(CC) $(CFLAGS) -o creat creat.c
	
read: read.c
	$(CC) $(CFLAGS) -o read read.c	
	
clean:
	rm -f $(OBJS) core* outfile*