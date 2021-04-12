#include <stdio.h>
#include <stdlib.h>
#include "my_utils.h"

int    main(void)
{
    char c;
    char newLine;

    c = 'a';
    newLine = 10;
    my_putchar(c);
    my_putchar(newLine);
    my_putstr("Hello World");
    my_putchar(newLine);
    my_putnbr(INT32_MIN);
    my_putchar(newLine);
    my_putnbr(INT32_MAX);
    my_putchar(newLine);
    my_putnbr(0);
    my_putchar(newLine);
    my_putnbr(10);
    my_putchar(newLine);
    return(0);
}