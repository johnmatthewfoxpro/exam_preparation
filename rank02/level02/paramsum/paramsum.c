#include <unistd.h>

void putnmb(int n)
{
	if (n >= 10)
		putnmb(n / 10);
	char c = (n % 10) + '0';
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int i = 1;

	(void)argv;
	if (argc < 2)
	{
		write(1, "0", 1);
		write(1, "\n", 1);
		return(0);
	}
	i = argc - 1;
	putnmb(i);
	write(1, "\n", 1);
	return (0);
}