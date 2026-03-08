#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;

    if (argc == 3)
    {
        while (argv[1][i] && argv[2][j])
        {
            if (argv[1][i] == argv[2][j])
                i++;
            j++;
        }
        if (!argv[1][i])
            write(1, "1", 1);
        else
            write(1, "0", 1);
    }
    write(1, "\n", 1);
    return 0;
}

// int	main(int argc, char **argv)
// {
// 	int i = 0;
// 	int x = 0;
// 	char *str1 = argv[1];
// 	char *str2 = argv[2];
// 	int found = 0;
// 	char valid = '1';

// 	if(argc == 3)
// 	{
// 		while (str1[i])
// 		{
// 			x = 0;
// 			found = 0;
// 			while(str2[x])
// 			{
// 				if(str1[i] == str2[x])
// 				{
// 					found = 1;
// 					break;
// 				}
// 				x++;
// 			}
// 			if (found == 0)
// 			{
// 				valid = '0';
// 				break;
// 			}
// 			i++;
// 		}
// 		write(1, &valid, 1);
// 	}
// 	write(1, "\n", 1);
// }
