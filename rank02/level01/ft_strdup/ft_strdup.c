#include <stdlib.h>

char    *ft_strdup(char *src)
{
	char * dup;
	int i = 0;

	while(src[i])
		i++;
	dup = malloc(i * (sizeof 1));
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	return(dup);
}
