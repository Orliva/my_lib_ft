#include "libft.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
    char ptr[] = "qwert";

    memset(ptr, 'a', 4);
 //   ft_memset(ptr, 'b', 4);
    printf("%s\n", ptr);
    return (0);
}
