#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int     *ft_rrange(int start, int end)
{
	int i = 0;
	int len = 0;
	int	*tab;

	if (start > end)
		len = start - end + 1;
	else if (end > start)
		len = end - start + 1;
	else
		len = 1;
	tab = malloc(len * sizeof(int));
	if (start > end)
	{
		while (i < len)
		{
			tab[i] = end + i;
			i++;
		}
	}
	else if (end > start)
	{
		while (i < len)
		{
			tab[i] = end - i;
			i++;
		}
	}
	else
		tab[0] = start;
	return (tab);
}

// int main(void)
// {
// 	int i = 0;
// 	int *tab = ft_rrange(-1, 2);
// 	while ( i < 4)
// 	{
// 		printf("%d\n", tab[i]);
// 		i++;
// 	}
// }


