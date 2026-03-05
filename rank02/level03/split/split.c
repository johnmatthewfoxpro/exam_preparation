#include <stdlib.h>
#include <stdio.h>

int count_words(char *str)
{
    int num_words = 0;

    while(*str == ' ' || *str == '\t' || *str == '\n')
        str++;
    while(*str != '\0')
    {
        num_words++;
        while(!(*str == ' ' || *str == '\t' || *str == '\n'))
            str++;
        while(*str == ' ' || *str == '\t' || *str == '\n')
            str++;
    }
    return(num_words);
}

char    **ft_split(char *str)
{
    int  num_words;
    char **array;

    num_words = count_words(str);
    printf("%d\n", num_words);
    array = malloc(sizeof(char *) * (num_words + 1));
    if(!array)
        return NULL;
    array[num_words] = 0;
    // fill_words(array, str);
    return(array);
}

int main(int argc, char **argv)
{
    (void)argc;
    char **split = ft_split(argv[1]);
    (void)split;
    return(0);
}