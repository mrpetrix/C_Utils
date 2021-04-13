#include "my_utils.h"

void    my_sort_int_tab(int *tab, int size)
{
    int i;
    int j;

    i = 0;
    while (i < size - 1)
    {
        j = i + 1;
        while (j < size)
        {
            if (tab[i] > tab[j])
            {
                my_swap_int(&tab[i], &tab[j]);
            }
            j++;
        }
        i++;
    }
}
