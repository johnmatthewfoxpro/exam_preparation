#include <unistd.h>

int check(int c, char *str, int index)
{
	int i = 0;

	while (i < index)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	int i = 0;
	int x = 0;
	int y = 0;

	if (argc == 3)
	{
		while(argv[1][i])
			i++;
		while(argv[2][x])
		{
			argv[1][i] = argv[2][x];
			i++;
			x++;
		}
		i--;
		while(y <= i)
		{
			if(check(argv[1][y], argv[1], y))
				write(1, &argv[1][y], 1);
			y++;
		}
	}
	write(1, "\n", 1);
	return (0);
}