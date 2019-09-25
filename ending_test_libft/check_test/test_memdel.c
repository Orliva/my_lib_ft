#include "libft.h"

int main(void)
{
    int i;
    char *p;

    i = 0;
    p = ft_memalloc(5);
    while (i < 5)
    {
        p[i] = i +48;
        write(1, &p[i], 1);
        i++;
    }
    ft_memdel((void **)&p);
        if (p == NULL)
            write(1, "\nNULL\n", 6);
}
