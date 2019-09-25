#include "libft.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
    char const *src = "qwetyertui";
    char const *check = "ert";

    printf("%s\n", strstr(src, check));
    printf("%s\n", ft_strstr(src, check));
//    printf("%s\n", strnstr(src, check, 3));
    printf("%s\n", ft_strnstr(src, check, 1));

    return (0);
}
