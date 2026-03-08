int     ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int rtn = 0;
	int sign = 1;
	int digit = 0;
	char c = 0;

	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i])
	{
		c = str[i];
		if (c >= 'A' && c <= 'F')
			c += 32;
		if (c >= '0' && c <= '9')
			digit = c - '0';
		else if (c >= 'a' && c <= 'f')
			digit = c - 'a' + 10;
		else
			break;
		if (digit >= str_base)
			break ;
		rtn = rtn * str_base + digit;
		i++;
	}
	return(rtn * sign);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main(int argc, char **argv)
// {
// 	(void)argc;
// 	char *str = argv[1];
// 	int base = atoi(argv[2]);
// 	int num = ft_atoi_base(str, base);
// 	printf("%d\n", num);
// }
