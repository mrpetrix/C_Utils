#include "my_utils.h"

int     my_atoi(char *str)
{
    unsigned int    result;
    int             factor;

    result = 0;
    factor = 1;

    if (*str == '-')
    {
        factor = -1;
        str++;
    }
    else if (*str == '+')
    {
        str++;
    }

    while (*str >= 48 && *str <= 57)
    {
        result *= 10;
        result += *str - 48;
        str++;
    }

    return (result * factor);
}
