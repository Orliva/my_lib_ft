#include "libft.h"

void    ft_striter(char *s, void (*f)(char *))
{
    int i;

    i = 0;
    while (s != NULL && f != NULL && s[i])
    {
        f(&s[i]);
        i++;
    }
}
