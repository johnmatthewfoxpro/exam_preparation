#define _GNU_SOURCE
#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
#endif

#include <string.h>
#include <errno.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void filter(char *string, char *s)
{
	int i = 0;
	int j = 0;
	int len = strlen(s);

	while (string[i])
	{
		j = 0;
		while (string[i+j] == s[j])
			j++;
		if (j == len)
		{
			j = 0;
			while (s[j])
			{
				string[i] = '*';
				i++;
				j++;
			}
		}
		else
			i++;
	}
	printf("%s", string);
}

int main(int argc, char **argv)
{
		if (argc != 2 || argv[1][0] == '\0')
		return (1);

	char 	buffer[BUFFER_SIZE];
	char	*result = NULL;
	char 	*temp;
	int		total = 0;
	ssize_t bytes;

	while ((bytes = read(0, buffer, BUFFER_SIZE)) > 0)
	{
		temp = realloc(result, total + bytes + 1);
		if (!temp)
		{
			free(result);
			perror("realloc");
			return (1);
		}
		result = temp;
		memmove(result + total, buffer, bytes);
		total += bytes;
		result[total] = '\0';
	}
	if (!result)
		return (0);
	if (bytes < 0)
	{
		free(result);
		perror("read");
		return(1);
	}
	filter(result, argv[1]);
	free(result);
	return (0);
}
