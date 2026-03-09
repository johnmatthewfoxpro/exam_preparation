int     ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int rtn = 0;
	int sign = 1;
	char c = 0;
	int digit = 0;

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
			break ;
		rtn = rtn * str_base + digit;
		i++;
	}
	return (rtn * sign);
}