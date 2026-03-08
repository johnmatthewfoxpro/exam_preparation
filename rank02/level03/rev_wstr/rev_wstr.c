#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int i = 0;
	int end = 0;
	int start = 0;
	char *str;

	if (argc == 2)
	{
		str = argv[1];
		while(str[i])
			i++;
		i--;
		while (i >= 0)
		{
			while (i >= 0 && (str[i] == ' ' || str[i] == '\t'))
				i--;
			end = i;
			while (i >= 0 && str[i] != ' ' && str[i] != '\t')
				i--;
			start = i + 1;
			while (start <= end)
			{
				write(1, &str[start], 1);
				start++;
			}
			if (i > 0)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
}