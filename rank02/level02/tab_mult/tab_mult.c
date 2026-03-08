#include <unistd.h>

int ft_atoi(char *str)
{
	int i = 0;
	int retn = 0;

	while (str[i])
	{
		retn = (retn * 10) + (str[i] - '0');
		i++;
	}
	return (retn);
}

void ptnbr(int nmb)
{
	char c = 0;
	if (nmb >= 10)
		ptnbr(nmb / 10);
	c = nmb % 10 + '0';
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int num;
	int i = 1;

	if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		// if (num == 0)
		// {
		// 	write(1, "0 x 0 = 0", 9);
		// 	return(0);
		// }
		while ( i <= 9)
		{
			ptnbr(i);
			write(1, " x ", 3);
			ptnbr(num);
			write(1, " = ", 3);
			ptnbr(i * num);
			write(1, "\n", 1);
			i++;
		}
		return(0);
	}
	write(1, "\n", 1);
	return(0);
}

// {
// 	int x = ft_atoi("4567");
// 	ptnbr(x);
// 	write(1, "\n", 1);
// 	return 0;
// }