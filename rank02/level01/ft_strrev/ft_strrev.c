char    *ft_strrev(char *str)
{
	int i = 0;
	int y = 0;
	int x = 0;
	char tmp = 0;

	while (str[i])
		i++;
	i--;
	x = i;
	while (y <= i / 2)
	{
		tmp = str[y];
		str[y] = str[x];
		str[x] = tmp;
		y++;
		x--;
	}
	return (str);
}

// #include <stdio.h>

// int main(void)
// {
// 	char str[6] = "hello";
// 	ft_strrev(str);
// 	printf("%s\n", str);
// }