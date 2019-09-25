#include "libft.h"

int main(void)
{
    char const *s = "*qwe***asd*";
    char **ptr;
    int i;
    int j;

    ptr = ft_strsplit(s, '*');
    i = 0;
    while (i < 2)
    {
        j = 0;
        while (j < 4)
        {
            write(1, &ptr[i][j], 1);
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
    write(1, &ptr[2], 1);
    free(ptr);
}
