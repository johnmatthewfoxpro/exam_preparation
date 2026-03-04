#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	char c = 0;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				c = 219 - argv[1][i];
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				c = 155 - argv[1][i];
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

// c = 219 - argv[1][i];
// c = 155 - argv[1][i];
