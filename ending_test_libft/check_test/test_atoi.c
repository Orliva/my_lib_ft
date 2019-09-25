#include <string.h>
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char a[] = "1ae";
    char b[] = "q12beryhj";
    char c[] = "   t123  ";
    char d[] = "   \r1234.12";
    char e[] = " \0\t\n\r12345";
    char f[] = " 123456\t\n\r\0";
    char g[] = " 1!.2!";
    char h[] = " 1.3#";
    char i[] = " 1r1234a";
    char j[] = "";

    printf("%d", atoi(a));
    printf("%s", "\n");
    printf("%d", atoi(b));
    printf("%s", "\n");
    printf("%d", atoi(c));
    printf("%s", "\n");
    printf("%d", atoi(d));
    printf("%s", "\n");
    printf("%d", atoi(e));
    printf("%s", "\n");
    printf("%d", atoi(f));
    printf("%s", "\n");
    printf("%d", atoi(g));
    printf("%s", "\n");
    printf("%d", atoi(h));
    printf("%s", "\n");
    printf("%d", atoi(i));
    printf("%s", "\n");
    printf("%d", atoi(j));
    printf("%s", "\n");
    return (0);
}
