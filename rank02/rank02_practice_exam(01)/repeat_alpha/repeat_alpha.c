#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int y = 0;
	char *str;
	char c = 0;

	if (argc == 2)
	{
		str = argv[1];
		while( str[i])
		{
			y = 1;
			c = str[i];
			if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
			{
				if (c >= 'A' && c <= 'Z')
					y = c - 64;
				else if (c >= 'a' && c <= 'z')
					y = c - 96;
				while (y > 0)
				{
					write(1, &c, 1);
					y--;
				}
			}
			else
				write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
}