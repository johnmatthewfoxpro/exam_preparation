#include <unistd.h>
// #include <stdio.h>

int	main(int argc, char **argv)
{
	int i = 0;
	int words = 0;;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			while (argv[1][i] == '\n' || argv[1][i] == '\t' || argv[1][i] == ' ')
				i++;
			if (argv[1][i] == '\0')
				break;
			words += 1;
			while (!(argv[1][i] == '\n' || argv[1][i] == '\t' || argv[1][i] == ' ') && argv[1][i] != '\0')
				i++;
		}
		i = 0;
		// printf("%d", words);
		while (words > 1)
		{
			while (argv[1][i] == '\n' || argv[1][i] == '\t' || argv[1][i] == ' ')
				i++;
			words -= 1;
			while (!(argv[1][i] == '\n' || argv[1][i] == '\t' || argv[1][i] == ' ') && argv[1][i] != '\0')
				i++;
		}
		while (argv[1][i])
		{
			while (argv[1][i] == '\n' || argv[1][i] == '\t' || argv[1][i] == ' ')
				i++;
			if (argv[1][i] == '\0')
				break;
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}