#include <unistd.h>

int main(int argc, char **argv)
{
	char *str;
	int i = 0;
	char c = 0;

	if (argc == 2)
	{
		str = argv[1];
		while (str[i])
		{
			c = str[i];
			if (c >= 'A' && c <= 'Z')
				c += 32;
			else if (c >= 'a' && c <= 'z')
				c -= 32;
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
}