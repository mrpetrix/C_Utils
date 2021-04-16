#ifndef MYHEADER_H
#define MYHEADER_H

void            my_putchar(char c);
void            my_putstr(char *str);
void            my_putnbr(int nbr);
int             my_atoi(char *str);
void            my_swap_int(int *a, int *b);
void            my_swap_char(char *a, char *b);
int             my_strlen(char *str);
void            my_sort_int_tab(int *tab, int size);
char            *my_strcpy(char *dest, const char *src);
char            *my_strncpy(char *dest, const char *src, unsigned int n);
unsigned int    my_strlcpy(char *dest, char *src, unsigned int size);

#endif /* MYHEADER_H */
