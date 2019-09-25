#include "libft.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
    char ptr[] = "qwer";
    char *dest = "QWERTHFGGF" ;
    
    dest = memccpy(dest, ptr, 'e', 6);
    if (dest == NULL)
        printf("NULL : %s\n", dest);
    else
        printf("%s\n", dest);
    return (0);
}
