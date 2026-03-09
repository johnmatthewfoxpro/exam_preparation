int     ft_atoi(const char *str)
{
	int i = 0;
	int sign = 1;
	int ret = 0;

	if (str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			break ;
		ret = (ret * 10) + (str[i] - '0');
		i++;
	}
	return (ret * sign);
}