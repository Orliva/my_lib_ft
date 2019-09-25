#include "libft.h"

int ft_atoi(const char *nptr)
{
    int i;
    int n;

    n = 0;
    i = 0;
    while(nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n'
        || nptr[i] == '\r')
        i++;
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        n = (n * 10) + (nptr[i] - '0');
        i++;
    }
    return (n);
}
