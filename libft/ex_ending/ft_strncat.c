#include "libft.h"

char    *ft_strncat(char *dest, char const *src, size_t n)
{
    size_t i;
    size_t j;

    j = 0;
    i = 0;
    while (dest[i])
        i++;
    while (src[j] && j < n)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    if (i == n)
        dest[i] = '\0';
    return (dest);
}
