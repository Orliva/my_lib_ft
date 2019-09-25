#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    unsigned char *ptr_dest;
    unsigned char *ptr_src;

    ptr_dest = (unsigned char *)dest;
    ptr_src = (unsigned char *)src;
    while (n > 0 && *ptr_src != c)
    {
        *ptr_dest = *ptr_src;
        ptr_dest++;
        ptr_src++;
        n--;
    }
    if (n > 0)
    {
        *ptr_dest = c;
        ptr_dest++;
        return (ptr_dest);
    }
    else
        return (NULL);
}
