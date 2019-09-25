#include "libft.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
    char dup[10] = "1234567890";
    
    printf("%s\n", dup);
    printf("%s\n",(char *) ft_memmove(&dup[4], &dup[3], 3));
    printf("%s\n", dup);
    return (0);
}
