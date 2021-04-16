#include "my_utils.h"

char            *my_strcpy(char *dest, const char *src)
{
    unsigned int    i;

    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = src[i];
    return (dest);
}

char            *my_strncpy(char *dest, const char *src, unsigned int n)
{
    unsigned int    i;

    i = 0;
    while (src[i] && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = 0;
        i++;
    }
    return (dest);
}

unsigned int    my_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int    i;

    i = 0;
    while(i < size - 1 && src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = 0;
    return (i);
}