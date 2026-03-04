char	*ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	char *dst;
	dst = s1;
	i = 0;
	while (s2[i])
	{
		dst[i] = s2[i];
		i++;
	}
	return (dst);
}