#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	char c = 0;
	char *str;
	if (argc == 2)
	{
		str = argv[1];
		while (str[i])
		{
			c = str[i];
			if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
			{
				if (c >= 'A' && c <= 'Z')
					c = 155 - str[i];
				if (c >= 'a' && c <= 'z')
					c = 219 - str[i];
				write(1, &c, 1);
			}
			else
				write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
}