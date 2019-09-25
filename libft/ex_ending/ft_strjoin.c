#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *ptr;
    size_t  size;
    size_t  i;

    size = 0;
    i = 0;
    if (s1 == NULL || s2 == NULL)
        return (NULL);
    size = ft_strlen(s1) + ft_strlen(s2) + 1;
    ptr = (char *)malloc(sizeof(char) * size);
    if (ptr == NULL)
        return (NULL);
    while (i < ft_strlen(s1))
    {
        ptr[i] = s1[i];
        i++;
    }
    i = 0;
    while(i < ft_strlen(s2))
    {
        ptr[ft_strlen(s1) + i + 1] = s2[i];
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}
