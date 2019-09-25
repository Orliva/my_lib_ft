#include "libft.h"
#include <stdio.h>

int main(void)
{
    int i;
    char *str = "qwet";

    i = 0;
    while (i < 7)
    {
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
    ft_strclr(str);
    i = 0;
    if (str != NULL)
        while (i < 7)
        {
            write(1, &str[i], 1);
            i++;
        }
    else
        printf("NULL :%s", str);
    
    return (0);
}
