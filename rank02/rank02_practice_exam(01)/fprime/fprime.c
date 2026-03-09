#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int p = 2;
	int numb;

	if (argc > 1)
	{
		numb = atoi(argv[1]);
		if (numb == 1)
			printf("1");
		while (p <= numb)
		{
			if (numb % p == 0)
			{
				printf("%d", p);
				if (p != numb)
					printf("*");
				numb = numb / p;
			}
			else
				p++;
		}
	}
	printf("\n");
}