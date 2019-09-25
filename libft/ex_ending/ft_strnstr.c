#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    while (*big)
    {
        big = ft_strchr(big, little[0]);
        if (ft_strncmp(big, little, len) == 0)
            return ((char *)big);
        big++;
    }
    return (NULL);
}
