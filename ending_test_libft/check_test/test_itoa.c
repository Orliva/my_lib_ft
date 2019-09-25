#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *ptr;
    int n =  2147483647;
//    int i = 0;
//    int w = 0;
    ptr = ft_itoa(n);
    printf("%s\n", ptr);
 /*   while (i < 11)
    {
        w = ptr[i] + 48;
        write(1, &w, 1);
        i++;
    }*/
    free(ptr);
    return (0);
}
