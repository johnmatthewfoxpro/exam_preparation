#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int bits = 7;
	char b = 0;

	while (bits >= 0)
	{
		b = ((octet >> bits) & 1) + '0';
		write(1, &b, 1);
		bits--;
	}
}

// int main(void)
// {
// 	char a = '2';

// 	print_bits(a);
// }