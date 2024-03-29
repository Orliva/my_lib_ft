#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    unsigned char *ptr = (unsigned char *)s;
   
    while (n > 0)
    {
        *ptr = c;
        ptr++;
        n--;
    }
    return ((unsigned char *)s);
}
