#include "get_next_line.h"

char *get_next_line(int fd)
{
	if (BUFFER_SIZE < 1 || fd < 0 || read(fd, NULL, 0) < 0) {return (NULL);}
	char *line = malloc(100000), *buf = line;
	while (read(fd, buf, 1) > 0 && *buf++ != '\n');
	return (buf > line) ? (*buf = 0, line) : (free(line), NULL);
}