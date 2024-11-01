#include "libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
    unsigned char *str1 = (unsigned char *)str;
    unsigned char to_find = (unsigned char)c;
    size_t count = 0;
    if(*str1 == '\0' || n == 0)
        return 0;
    while (*str1 != '\0' && count < n)
    {
        if(*str1 == to_find)
            return (void *)str1;
        
        if(count == n)
            return 0;
        str1++;
        
    }
    return 0;
}