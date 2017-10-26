#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

#define FILEPATH "/tmp/tempfile"

int main()
{
	int fd;

	fd = open(FILEPATH, O_RDWR);

	/* expect open to fail for non-existent file */
	if (fd == -1)
	{
		printf("File open failed for non-existent file.\n");
	}

	fd = open(FILEPATH, O_RDWR | O_CREAT, S_IRWXU);

	if (fd != -1)
	{
		printf("File open succeeded and created file.\n");
	}

	close(fd);

	fd = open(FILEPATH, O_RDWR | O_CREAT | O_EXCL, S_IRWXU);

	if (fd == -1)
	{
		printf("File open failed for existing file with flags O_CREAT and O_EXCL\n");
	}

	unlink(FILEPATH);

	fd = creat(FILEPATH, S_IRWXU);

	if (fd != -1)
	{
		printf("File creation succeeded.\n");
	}

	fd = open(FILEPATH, O_RDWR | O_CREAT | O_EXCL, S_IRWXU);

	if (fd == -1)
	{
		printf("File open failed for existing file with flags O_CREAT and O_EXCL\n");
	}

	unlink(FILEPATH);

	return 0;
}
