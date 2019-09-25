#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned char i;
    char    *str_new;

    i = 0;
    if (s == NULL || f == NULL)
        return (NULL);
    str_new = ft_strnew(ft_strlen(s) + 1);
    while (s[i])
    {
        str_new[i] = f(i, s[i]);
        i++;
    }
    return (str_new);
}
