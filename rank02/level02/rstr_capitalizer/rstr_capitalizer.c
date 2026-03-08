#include <unistd.h>

int main( int argc, char **argv)
{
	int i = 1;
	int x = 0;
	char c = 0;

	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[i])
	{
		x = 0;
		while (argv[i][x])
		{
			c = argv[i][x];
			if (argv[i][x + 1] == '\t' || argv[i][x + 1] == ' ' || argv[i][x + 1] == '\0')
			{
				if (argv[i][x] >= 'a' && argv[i][x] <= 'z')
					c -= 32;
			}
			else
			{
				if (argv[i][x] >= 'A' && argv[i][x] <= 'Z')
					c += 32;
			}
			write(1, &c, 1);
			x++;
			if (argv[i][x] == '\0')
				write(1, "\n", 1);
		}
		i++;
	}
}