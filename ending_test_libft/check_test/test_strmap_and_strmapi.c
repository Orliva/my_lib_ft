#include "libft.h"
#include <stdio.h>

char    f(char a)
{
    return (a + 1);
}

char    f1(unsigned int ind, char a)
{
    unsigned int i;

    i = ind + 48;
    write(1, &i, 1);
    write(1, "\n", 1);
    return (a + 1);
}

int main(void)
{
    const char str[] = "23456";
    char    *ptr;

    printf("ft_strmap:\n");
    printf("Old str: %s\n", str);
    ptr = ft_strmap(str, &f);
    printf("New str: %s\n", ptr);
    printf("ft_strmapi:\n");
    free(ptr);
    printf("Old str: %s\n", str);
    ptr = ft_strmapi(str, &f1);
    printf("New str: %s\n", ptr);
    free(ptr);
    return (0);
}    
