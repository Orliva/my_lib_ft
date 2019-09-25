#include "libft.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
    char const *s1 = "qwe4rt";
    char const *s2 = "qwe0rt";
    printf("%d\n", ft_memcmp(s1, s2, 0));
    return (0);
}
