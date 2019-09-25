#include "libft.h"
#include <stdio.h>

int main(void)
{
    char const *str1 = "QWERTY";
    char const *str2 = "qewrty";
    char *p;
    size_t i = 0;

    p = ft_strjoin(str1, str2);
    while (i < ft_strlen(str1) + ft_strlen(str2) + 1)
    {
        write(1, &p[i], 1);
        i++;
    }
    free(p);
    return (0);
}
