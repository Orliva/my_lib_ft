#include "libft.h"
#include <stdio.h>

char    *ft_strstr(const char *haystack, const char *needle)
{
    int check;
    char *ptr_hs;
    char *ptr_nl;
    
    while (*haystack)
    {
        if (*haystack == *needle)
        {
            check = 49;
            ptr_hs =(char *) haystack;
            ptr_nl =(char *) needle;
            while (*ptr_hs && *ptr_nl)
            {
                ptr_nl++;
                ptr_hs++;
                if (*ptr_hs != *ptr_nl && *ptr_nl)
                    check = 48;
            }
            if (check == 49)
                return ((char *)haystack);
        }
        haystack++;
    }
    return (NULL);
}
