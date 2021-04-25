unsigned int    my_strlen(char *str)
{
    int result;

    result = 0;
    while (*str)
    {
        result++;
        str++;
    }
    return (result);
}
