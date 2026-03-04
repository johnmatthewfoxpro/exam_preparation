#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	char find; 
	char replace;

	if (argc != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (argc == 4)
	{
		find = *argv[2];
		replace = *argv[3];
		if (argv[2][1] != '\0' || argv[3][1] != '\0')
		{
			write(1, "\n", 1);
			return (0);
		}
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == find)
				argv[1][i] = replace;
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
