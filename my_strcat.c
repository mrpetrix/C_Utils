#include "my_utils.h"

char    *my_strcat(char *dest, const char *src)
{
    unsigned int    i;
    unsigned int    dest_len;

    i = 0;
    dest_len = my_strlen(dest);
    while(src[i])
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = 0;
    return (dest);
}

char    *my_strncat(char *dest, const char *src, unsigned int n)
{
    unsigned int    i;
    unsigned int    dest_len;

    i = 0;
    dest_len = my_strlen(dest);
    while(src[i] && i < n)
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = 0;
    return (dest);
}
