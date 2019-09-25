#include "libft.h"

char    *ft_strnew(size_t size)
{
    char    *ptr;

    ptr = (char *)malloc(sizeof(char) * size);
    if (ptr == NULL)
        return (NULL);
    ft_bzero(ptr, size);
    return (ptr);
}
