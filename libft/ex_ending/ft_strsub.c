#include "libft.h"

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char    *ptr_new;
    char    *ptr_s;
    size_t  i;

    i = 0;
    if (s == NULL)
        return (NULL);
    ptr_s =(char *)&s[start];
    ptr_new = (char *)malloc(sizeof(char) * len);
    if (ptr_new == NULL)
        return (NULL);
    while (ptr_s[i] && i < (len - 1))
    {
        ptr_new[i] = ptr_s[i];
        i++;
    }
    if (len == 1)
        ptr_new[i] = '\0';
    return (ptr_new);
}
