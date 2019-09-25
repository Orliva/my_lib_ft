#include "libft.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
    char const *s = "qwerty";
    char ptr[] = "gnjvjf";
    char *p;

    p = strcpy(ptr, s);
    printf("%s\n", p);
    return (0);
}
