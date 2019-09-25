#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *ptr;

    ptr = (unsigned char *)s;
    while (n > 0)
    {
        if (*ptr == c)
            return (ptr);
        ptr++;
        n--;
    }
    return (NULL);
}       
