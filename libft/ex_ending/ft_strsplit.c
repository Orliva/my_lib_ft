#include "libft.h"
#include <stdio.h>
static size_t  count_word(char *str, char c)
{
    size_t  count;
    size_t  i;

    count = 0;
    i = 0;
    while (str[i])
    {
        while (str[i] == c)
            i++;
        if (str[i])
        {
            count++;
            while (str[i] && str[i] != c)
                i++;
        }
    }
 //   printf("%ld\n", count);
    return (count);
}

static size_t  size_word(char *ptr_str, char c)
{
    size_t size;

    size = 0;
    while (*ptr_str && *ptr_str == c)
        ptr_str++;
    while (*ptr_str && *ptr_str != c)
    {
        size++;
        ptr_str++;
    }
//    printf("%ld\n", size);
    return (size);
}

static char    **ptr_new_mal(char **str, char *ptr_s, char c, size_t c_word)
{
    size_t i;

    i = 0;
    str = (char **)malloc(sizeof(char *) * (c_word + 1));
    while (i < c_word)
        str[i++] = (char *)malloc(sizeof(char) * (size_word(ptr_s, c) + 1));
//    str[i] = 0;
    return (str);
}

char    **ft_strsplit(char const *s, char c)
{
    char    **ptr_new;
    char    *str_copy;
    int i;
    int j;
    int count;

    ptr_new = NULL;
    i = 0;
    count = 0;
    if (s == NULL)
        return (NULL);
    str_copy = ft_strdup((char *)s);
    ptr_new = ptr_new_mal(ptr_new, str_copy, c, count_word(str_copy, c));
    free(str_copy);
    while (s[count])
    {
        if (s[count] != c)
        {
            j = 0;
            while (s[count] != c)
                ptr_new[i][j++] = s[count++];
            ptr_new[i][j] = '\0';
            i++;
        }
        else
            count++;
    }
    ptr_new[i] = 0;
    return (ptr_new);
}
