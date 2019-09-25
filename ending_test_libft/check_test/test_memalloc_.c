#include "libft.h"
#include <stdio.h>

int main(void)
{
    int i;
    char *p;
    int k;

    i = 0;
    k = 5;
    p = ft_memalloc(k);
    
    while (i < k)
    {
//        if (p == NULL)
//            write(1, "t", 1);
        write(1, &p[i], 1);
        p[i] = i + 48;
        write(1, " ", 1);
        write(1, &p[i], 1);
        write(1, "\n", 1);
        i++;
    }
    free(p);
    return (0);
}
