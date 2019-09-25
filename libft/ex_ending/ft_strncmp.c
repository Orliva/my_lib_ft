#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    if (n == 0)
        return (0);
    while (*s1 == *s2 && i < n)
    {
        if (*s1 == '\0')
            return (*s1 - *s2);
        s1++;
        s2++;
        i++;
    }
    return (*s1 - *s2);
}
