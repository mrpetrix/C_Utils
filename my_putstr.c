#include "my_utils.h"

void    my_putstr(char *str)
{
    while(*str)
    {
        my_putchar(*str);
        str++;
    }
}
