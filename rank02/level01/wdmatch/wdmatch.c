#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int x = 0;
	int check = 0;
	int c = 0;

	if (argc == 3)
	{
		while (argv[1][check])
			check++;
		while (argv[1][i])
		{
			x = 0;
			while (argv[2][x])
			{
				if (argv[1][i] == argv[2][x])
				{
					c++;
					break ;
				}
				x++;
			}
			i++;
		}
		if (c == check)
		{
			i = 0;
			while (argv[1][i])
			{
				x = 0;
				while (argv[2][x])
				{
					if (argv[1][i] == argv[2][x])
					{
						write(1, &argv[1][i], 1);
						break ;
					}
					x++;
				}
				i++;
			}
		}
	}
	write(1, "\n", 1);
}