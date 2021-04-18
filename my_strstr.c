#include <unistd.h>

char    *my_strstr(const char *str, const char *to_find)
{
    unsigned int    i;
    unsigned int    j;

    i = 0;
    j = 0;
    while(str[i])
    {
        if (to_find[j] == 0)
            return ((char*) &str[i-j]);
        else if(str[i] == to_find[j])
            j++;
        else
            j = 0;
        i++;
    }
    if (to_find[j] == 0)
        return ((char*) &str[i-j]);
    return (NULL);
}
