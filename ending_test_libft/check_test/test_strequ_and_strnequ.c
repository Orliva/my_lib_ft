#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *str1 = "qwrtt";
    char *str2 = "qwrt";
    size_t size = 3;

    printf("%d\n", ft_strequ(str1, str2));
    printf("%d\n", ft_strnequ(str1, str2, size));
    return (0);
}
