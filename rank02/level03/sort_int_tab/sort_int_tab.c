void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i = 0;
    int tmp = 0;
    
    while (i < size)
    {
        unsigned int x = i + 1;
        while(x < size)
        {
            if (tab[i] > tab[x])
            {
                tmp = tab[x];
                tab[x] = tab[i];
                tab[i] = tmp;
            }
            x++;
        }
        i++;
    }
}