#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    const unsigned char *ptr_src;
    unsigned char *ptr_dest;

    ptr_dest =(unsigned char *)dest;
    ptr_src =(const unsigned char *)src;
    while (n > 0)
    {
        *ptr_dest = *ptr_src;
        ptr_dest++;
        ptr_src++;
        n--;
    }
    return ((unsigned char *)dest);
}
