#include "libft.h"

size_t  eval_start_wtsp(char const *str)
{
    size_t i;
    size_t count_del;

    i = 0;
    count_del = 0;
    while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
            count_del++;
        i++;
    }
    return (count_del);
}

size_t  eval_end_wtsp(char const *str)
{
    size_t i;
    size_t count_del;

    i = ft_strlen(str) - 1;
    count_del = 0;
    while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
            count_del++;
        i--;
    }
    return (count_del);
}

char    *ft_strtrim(char const *s)
{
    char    *ptr_new;
    char    *ptr_s;
    size_t  i;
    size_t  j;

    if (s == NULL)
        return (NULL);
    ptr_s = (char *)s;
    i = eval_start_wtsp(s);
    j = 0;
    ptr_new = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) -
        eval_start_wtsp((char *)s) - eval_end_wtsp((char *)s) + 1));
    if (ptr_new == NULL)
        return (NULL);
    while (i < (ft_strlen(s) - eval_end_wtsp(s)))
    {
        ptr_new[j] = ptr_s[i];
        j++;
        i++;
    }
    ptr_new[j] = '\0';
    return (ptr_new);
}
