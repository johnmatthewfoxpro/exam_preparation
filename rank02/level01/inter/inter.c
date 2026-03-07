#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int x = 0;
	int k = 0;
	char c = 0;

	if (argc == 3)
	{
		while (argv[1][i])
		{
			x = 0;
			while (argv[2][x])
			{
				if (argv[1][i] == argv[2][x])
				{
					k = 0;
					while (argv[1][k] != argv[1][i])
						k++;
					if (k == i)
					{
						k = 0;
						while (argv[2][k] != argv[2][x])
							k++;
						if (k == x)
						{
							c = argv[1][i];
							write(1, &c, 1);
						}
					}
				}
				x++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}