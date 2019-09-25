#include "libft.h"
#include <stdio.h>

int main(void)
{
    int size;
    char *p;

    size = 1;
    p = ft_strnew(size);
    if (p == NULL)
        printf("NULL :%s\n", p);
    else
        printf("%s\n", p);
    free(p);
    return (0);
}
