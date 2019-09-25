#include "libft.h"
#include <stdio.h>

int main(void)
{
    const char str[] = "qwertyu";
    size_t size = 4;
    unsigned int ind = 2;
    char *p;
    p = ft_strsub(str, ind, size);
    printf("%s\n", p);
    free(p);
    return (0);
}
