int	ft_atoi(const char *str)
{
	int rtn = 0;
	int sig = 1;
	int i = 0;

	if (str[0] == '-' || str[0] == '+')
	{
		if (str[0] == '-')
			sig = -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		rtn = (rtn * 10) + (str[i] - '0');
		i++;
	}
	return (rtn * sig);
}