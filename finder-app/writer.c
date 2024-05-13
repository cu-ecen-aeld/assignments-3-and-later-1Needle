#include <fcntl.h>
#include <syslog.h>
#include <string.h>

int main(int argc, char **argv)
{
	openlog(NULL, 0, LOG_USER);
	if(argc != 3)
	{
		syslog(LOG_ERR, "Invalid parameters");
		return 1;
	}
	int fd = open(argv[1], O_WRONLY | O_CREAT, S_IRWXU | S_IRGRP | S_IROTH);
	write(fd, argv[2], sizeof(char) * strlen(argv[2]));
	syslog(LOG_DEBUG, "Writing %s to %s", argv[2], argv[1]);
	return 0;
}
