#include <stdlib.h>

size_t  ft_strlcat(char *dest, const char *src, size_t n)
{
    size_t  i;
    size_t  s;
    size_t  d;

    i = 0;
    s = 0;
    d = 0;
    while (src[s])
    {
        s++;
    }
    while (dest[d])
    {
        d++;
    }
    if (d >= n)
        return (s + n);
    while (i < n - d - 1 && src[i])
    {
        dest[d + i] = src[i];
        i++;
    }
    dest[d + i] = '\0';
    return (s + d);
}
