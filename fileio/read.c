/*
 * read.c
 *
 *  Created on: Dec 21, 2017
 *      Author: richj
 */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

#define FILEPATH "/tmp/tempfile"

int main(void)
{
	unsigned long word;
	ssize_t nr;
	int fd;

	fd = open(FILEPATH, O_RDWR);

	nr = read(fd, &word, sizeof (unsigned long));
	if (nr == -1)
	{
		printf("Read failed\n");
	}

	return(0);
}


