#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv)
{
	int n;
	int i = 2;
	int mark = 1;

	if (argc == 2)
	{
		n = atoi(argv[1]);
		if (n == 1)
			printf("1");
		while (n >= i)
		{
			if (n % i == 0)
			{
				if (!mark)
					printf("*");
				printf("%d", i);
				n = n / i;
				mark = 0;
			}
			else
				i++;
		}
	}
	printf("\n");
}