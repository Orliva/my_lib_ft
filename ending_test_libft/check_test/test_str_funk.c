#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    const char a[] = "qwetyerui";
//    char b[] = "";
    const char *p = "tyq";
    int i;
    char *r;
    
    r = strnstr(a, p, 2);
    i = 0;
    while (r[i])
    {
        write(1, &r[i], 1);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}
