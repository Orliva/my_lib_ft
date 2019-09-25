#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int main(void)
{
 //   int a = 49;
//    int b = 48;
    int c = 0;
  //  char d = '@';
  //  char e = '[';
 //   int i;
    while (c <= 130)
    {
        if (ft_isascii(c))
            printf("%d %d\n",ft_isascii(c), c);
        else
            printf("%d\n", ft_isascii(c));
        c++;
    }
 /*   i = isalpha(a) + 48;
    write(1, &i, 1);
    write(1, "\n", 1);
    i = isalpha(b) + 48;
    printf("%c is a letter\n", i);
    write(1, &i, 1);
    write(1, "\n", 1);
    i = isalpha(c) + 48;
    write(1, &i, 1);
    write(1, "\n", 1);
    i = isalpha(d) + 48;
    write(1, &i, 1);
    write(1, "\n", 1);
    i = isalpha(e) + 48;
    write(1, &i, 1);
    write(1, "\n", 1);*/
    return (0);
}
