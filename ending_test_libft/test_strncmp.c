#include "libft.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
    char const *s1 = "qwerty";
    char const *s2 = "awerty";

    printf("%d\n", ft_strncmp(s1, s2, 0));
    return (0);
}
