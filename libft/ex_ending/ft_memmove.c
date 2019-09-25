#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *ptr_mass;
    unsigned char *ptr_src;
    unsigned char *ptr_dest;
    size_t i;

    ptr_dest = (unsigned char *)dest;
    ptr_src = (unsigned char *)src;
    i = 0;
    ptr_mass = (unsigned char *)malloc(sizeof(char) * n);
    while (i < n)
    {
        ptr_mass[i] = ptr_src[i];
        i++;
    }
    while (i > 0)
    {
        ptr_dest[n - i] = ptr_mass[n - i];
        i--;
    }
    free(ptr_mass);
    return ((unsigned char *)dest);
}
