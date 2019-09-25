#include "libft.h"

char    *ft_strdup(const char *s)
{
    char    *ptr;
    int i;

    i = ft_strlen(s);
    ptr = (char *)malloc(sizeof(*ptr) * (i + 1));
    i = 0;
    while (s[i])
    {
        ptr[i] = s[i];
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}
