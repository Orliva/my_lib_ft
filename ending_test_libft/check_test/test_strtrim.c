#include "libft.h"
#include <stdio.h>
int main(void)
{
    char *ptr;
    char const *str1 = " \t  \n  ";
//    char const *str2 = "";
//    char const *str = "\n \t  q\ne  wr\ty \t \t \n  ";
    size_t i;

    i = 0;
    ptr = ft_strtrim(str1);
 /*   while (i < ft_strlen(str))
    {
        write(1, &str[i], 1);
        i++;
    }*/
    i = 0;
 //   write(1, "\n", 1);
    if (ptr == NULL)
    {
        printf("NULL :%s\n", ptr);
    }
    else
    {
        while (ptr[i])
        {
            write(1, &ptr[i], 1);
            i++;
        }
        write(1, "\n", 1);
    }
    free(ptr);
    return (0);
}
