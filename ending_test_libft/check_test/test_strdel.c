#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *p;
    int i;

    i = 0;
    p = ft_strnew(5);
    while (i < 5)
    {
        p[i] = i + 48;
        i++;
    }
    printf("%s\n", p);
    ft_strdel(&p);
    if (p == NULL)
        printf("NULL :%s\n", p);
    return (0);
}
