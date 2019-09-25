#include "libft.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
    char a[] = "aaaaa2baaaaaabc";
    char *ft;
    char *origin;

    ft = ft_strchr(a, 'b');
    origin = strchr(a, 'b');
    write(1, &origin[1], 1);
    write(1, "\n", 1);
    write(1, &ft[1], 1);
    write(1, "\n", 1);
    
    ft = ft_strrchr(a, 'b');
    origin = strrchr(a, 'b');
    write(1, &origin[1], 1);
    write(1, "\n", 1);
    write(1, &ft[1], 1);
    write(1, "\n", 1);
    return (0);
}
