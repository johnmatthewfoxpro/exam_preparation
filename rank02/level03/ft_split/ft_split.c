#include <stdlib.h>

int	count_words(char *str)
{
	int i = 0;
	int words = 0;

	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		if (str[i])
			words++;
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
	}
	return (words);
}

char **ft_split(char *str)
{
	int i = 0;
	int k = 0;
	int j;
	int start;
	int words;
	char **table;

	words = count_words(str);
	table = malloc((words + 1) * sizeof(char *));
	if (!table)
		return (0);
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		start = i;
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
		if (i > start)
		{
			table[k] = malloc(i - start + 1);
			if (!table[k])
				return (0);
			j = 0;
			while (start < i)
			{
				table[k][j] = str[start];
				start++;
				j++;
			}
			table[k][j] = '\0';
			k++;
		}
	}
	table[k] = NULL;
	return (table);
}