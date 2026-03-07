#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int str1;
	int str2;
	int	ret;

	if (argc == 4)
	{
		str1 = atoi(argv[1]);
		str2 = atoi(argv[3]);
		ret = 0;
		if (argv[2][0] == '+')
			ret = str1 + str2;
		if (argv[2][0] == '-')
			ret = str1 - str2;
		if (argv[2][0] == '/')
			ret = str1 / str2;
		if (argv[2][0] == '*')
			ret = str1 * str2;
		printf("%d", ret);
	}
	printf("\n");
}