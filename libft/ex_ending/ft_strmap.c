#include "libft.h"

char    *ft_strmap(char const *s, char (*f)(char))
{
    size_t i;
    char *str_new;

    i = 0;
    if (s == NULL || f == NULL)
        return (NULL);
    str_new = ft_strnew(ft_strlen(s) + 1);
    while (s[i] != '\0')
    {
        str_new[i] = f(s[i]);
        i++;
        if (s[i] == '\0')
            str_new[i] = '\0';
    }
    return (str_new);
}
