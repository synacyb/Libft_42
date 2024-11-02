#include "libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
    unsigned char *str1 = (unsigned char *)str;
    unsigned char to_find = (unsigned char)c;
    size_t count = 0;
    if(*str1 == '\0')
        return 0;
    while (count < n)
    {
        if(*str1 == to_find)
            return (void *)str1;
        str1++;
        count++;
    }
    return 0;
}