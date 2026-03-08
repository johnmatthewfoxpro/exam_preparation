#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int start;
	int end;
	int first_word_printed = 0;

	if (argc == 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		start = i;
		while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
			i++;
		end = i;
		while (argv[1][i])
		{
			while (argv[1][i] == ' ' || argv[1][i] == '\t')
				i++;
			if (!argv[1][i])
				break;
			if (first_word_printed)
				write(1, " ", 1);
			while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
			{
				write(1, &argv[1][i], 1);
				i++;
			}
			first_word_printed = 1;
		}
		if (start != end)
		{
			if (first_word_printed)
				write(1, " ", 1);
			while (start < end)
			{
				write(1, &argv[1][start], 1);
				start++;
			}
		}
	}
	write(1, "\n", 1);
}