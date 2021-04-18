int     my_strcmp(const char *s1, const char *s2)
{
    unsigned int    i;

    i = 0;
    while(s1[i] == s2[i] && s1[i] && s2[i])
    {
        i++;
    }
    return (s1[i] - s2[i]);
}

int     my_strncmp(const char *s1, const char *s2, unsigned int n)
{
    unsigned int    i;

    i = 0;
    while(s1[i] == s2[i] && s1[i] && s2[i] && i < n - 1)
    {
        i++;
    }
    return (s1[i] - s2[i]);
}
