#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    char const s1[] = "qwert";
    char dest[] = "asdfgh";

    printf("%s\n", ft_strncpy(dest, s1, 3));
    return (0);
}
