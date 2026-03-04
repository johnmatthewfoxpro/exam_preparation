#include <unistd.h>

int main (int argc, char **argv)
{
	int i = 0;
	int l = 1;
	char *str = argv[1];

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (str[i] != '\0')
	{
		l = 1;
		if (str[i] >= 'A' && str[i] <= 'Z')
			l = str[i] - 64;
		else if (str[i] >= 'a' && str[i] <= 'z')
			l = str[i] - 96;
		while (l >= 1)
		{
			write(1, &str[i], 1);
			l--;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}