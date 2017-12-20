/*
 * creat.c
 *
 *  Created on: Dec 20, 2017
 *      Author: richj
 */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
	int fd;
	fd = creat("outfile", 0644);
	if (fd == -1)
	{
		printf("File creation using creat failed.");
	}

	fd = open("outfile2", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		printf("File creation using open failed.");
	}

	return 0;
}



