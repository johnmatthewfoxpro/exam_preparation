#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int c = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				c = argv[1][i] + 1;
				if (c == 91)
					c = 65;
			}
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				c = argv[1][i] + 1;
				if (c == 123)
					c = 97;
			}
			else
				c = argv[1][i];
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}