#include <unistd.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0;

	while (s[i] != '\0')
	{
		size_t y = 0;
		while(reject[y])
		{
			if (s[i] == reject[y])
				return(i);
			y++;
		}
		i++;
	}
	return (i);
}

// int main(int argc, char **argv)
// {
// 	(void)argc;
// 	size_t i = ft_strcspn(argv[1],argv[2]);
// 	write(1, &i, 1);
// }