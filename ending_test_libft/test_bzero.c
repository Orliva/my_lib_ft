#include "libft.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
    char ptr[] = "qwert";
    int i;

    i = 0;
    bzero(ptr, 4);
 //  ft_bzero(ptr, 4);
    while (i < 6)
    {
        write(1, &ptr[i], 1);
        i++;
    }
    return (0);
}
