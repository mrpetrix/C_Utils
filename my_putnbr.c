#include "my_utils.h"

void    my_putnbr(int nbr)
{
    unsigned int abs_nbr;

    if (nbr < 0)
    {
        my_putchar('-');
        abs_nbr = nbr * (-1);
    }
    else
    {
        abs_nbr = nbr;
    }

    if (abs_nbr < 10)
    {
        my_putchar(nbr + 48);
    }
    else
    {
        my_putnbr(abs_nbr / 10);
        my_putchar((abs_nbr % 10) + 48);
    }
}
