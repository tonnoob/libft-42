#include <stdlib.h>

size_t  ft_strlcpy(char *dest, const char *src, size_t n)
{
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    while (src[j])
    {
        j++;
    }
    if (n == 0)
        return (j);
    while (i < n - 1 && src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

    return (j);
}
