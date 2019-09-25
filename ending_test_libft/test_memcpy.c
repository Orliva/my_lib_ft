#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    char ptr[] = "qwerty";
    char dest[] = "asdfgh";

    memcpy(dest, ptr, 4);
//    ft_memcpy(dest, ptr, 4);
 //   printf("%s\n", dest);
    return (0);
}
