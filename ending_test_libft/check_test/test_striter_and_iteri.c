#include "libft.h"
#include <stdio.h>

void    f(char *str)
{
    *str = *str + 1;
}
void    f1(unsigned int ind, char *str)
{
    unsigned int i;

    i = ind + 48;
    write(1, &i, 1);
    write(1, "\n", 1);
    *str = *str + 1;
}

int main(void)
{
    char str[] = "12345";
    
    printf("ft_striter:\n");
    printf("Old value str: %s\n", str);
    ft_striter(str, &f);
    printf("New value str: %s\n", str);
    printf("ft_striteri:\n");
    printf("Old value str: %s\n", str);
    ft_striteri(str, &f1);
    printf("New value str: %s\n", str);
    return (0);
}
