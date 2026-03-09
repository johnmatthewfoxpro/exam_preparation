#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int x = 0;
	char *s1 = 0;
	char *s2 = 0;

	if (argc == 3)
	{
		s1 = argv[1];
		s2 = argv[2];
		while (s1[i] && s2[x])
		{
			if (s1[i] == s2[x])
				i++;
			x++;
		}
		if (!s1[i])
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}