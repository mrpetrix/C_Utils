#ifndef MYHEADER_H
#define MYHEADER_H

void            my_putchar(char c);
void            my_putstr(char *str);
void            my_putnbr(int nbr);
int             my_atoi(char *str);
int             my_factorial(int nb);
int             my_power(int nb, int power);
int             my_sqrt(int nb);
void            my_swap_int(int *a, int *b);
void            my_swap_char(char *a, char *b);
int             my_strlen(char *str);
void            my_sort_int_tab(int *tab, int size);
char            *my_strcpy(char *dest, const char *src);
char            *my_strncpy(char *dest, const char *src, unsigned int n);
unsigned int    my_strlcpy(char *dest, char *src, unsigned int size);
int             my_strcmp(const char *s1, const char *s2);
int             my_strncmp(const char *s1, const char *s2, unsigned int n);
char            *my_strcat(char *dest, const char *src);
char            *my_strncat(char *dest, const char *src, unsigned int n);
unsigned int    my_strlcat(char *dest, const char *src, unsigned int size);
char            *my_strstr(char *str, char *to_find);


#endif /* MYHEADER_H */
