unsigned int    my_factorial(int nb)
{
    if(nb < 0)
        return (0);
    else if (nb < 2)
        return (1);
    else
        return nb * my_factorial(nb - 1);
}

int             my_power(int nb, int power)
{
    if (power < 0)
        return (0);
    else if (power == 0)
        return (1);
    else
        return (nb * my_power(nb, power - 1));
}

unsigned int    my_sqrt(int nb)
{
    int guess;

    guess = 0;
    if (nb < 0)
        return (0);
    else
    {
        while (guess * guess <= nb)
        {
            if (guess * guess == nb)
                return (guess);
            guess++;
        }
        return (0);
    }
}

unsigned int    my_is_prime(int nb)
{
    return (nb);
}