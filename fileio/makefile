CC=/usr/bin/gcc
CFLAGS= -g -Wall

OBJS = open \
	   creat

all: $(OBJS)

open: open.c
	$(CC) $(CFLAGS) -o open open.c
	
creat: creat.c
	$(CC) $(CFLAGS) -o creat creat.c
	
clean:
	rm -f $(OBJS) core* outfile*