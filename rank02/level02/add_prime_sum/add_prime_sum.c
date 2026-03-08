#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_atoi(char *argv)
{
    int i = 0;
    int num = 0;

    while (argv[i])
    {
        num = num * 10 + (argv[i] - '0');
        i++;
    }
    return (num);
}

void ptnbr(int n)
{
    if (n >= 10)
        ptnbr(n / 10);
    char c = (n % 10) + '0';
    write(1, &c, 1);
}

int is_prime(int num)
{
    int n = 2;
    while ( n < num)
    {
        if (num % n == 0)
            return (0);
        n++;
    }
    return 1;
}

int primesum(int num)
{
    int sum = 0;
    int i = 2;

    while (i <= num)
    {
        if (is_prime(i))
        {
            sum += i;
        }
        i++;
    }
    return (sum);
}

int main(int argc, char **argv)
{
    int numb = 0;
    int sum = 0;

    if (argc == 2)
    {
        if (argv[1][0] == '-')
        {
            write(1, "0", 1);
            write(1, "\n", 1);
            exit(0);
        }
        numb = ft_atoi(argv[1]);
        sum = primesum(numb);
        ptnbr(sum);
        write(1, "\n", 1);
        exit(0);
    }
    write(1, "0", 1);
    write(1, "\n", 1);
    return (0);
}