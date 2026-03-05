#include <unistd.h>
#include <stdlib.h>
// #include <stdio.h>

int     *ft_range(int start, int end)
{
    int    *tab;
    int size;
    int i = 0;

    if (start < end)
        size = end - start + 1;
    else if (end < start)
        size = start - end + 1;
    else
        size = 1;
    tab = malloc(size * sizeof(int));
    if (!tab)
        return NULL;
    if(start == end)
    {
        tab[0] = start;
        return(tab);
    }
    else if (start < end)
    {
        while (i < size)
        {
            tab[i] = start + i;
            i++;
        }
    }
    else
        while (i < size)
        {
            tab[i] = start - i;
            i++;
        }
    return (tab);
}

// int main(void)
// {
//     int i = 0;
//     int *tab = ft_range(3, 8);
//     while(i < 6)
//     {
//         printf("%d\n", tab[i]);
//         i++;
//     }
// }