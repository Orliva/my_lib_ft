#include "libft.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
    const char *s = "qwert";

    printf("%s\n",(char *) ft_memchr(s, 'e', 2));

    return (0);
}
