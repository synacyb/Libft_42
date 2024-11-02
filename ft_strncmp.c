#include "libft.h"
#include <stdio.h>
int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    size_t count = 0;
    while (count < n && (*str1 != '\0' || *str2 != '\0'))
    {
        if(*str1 != *str2)
            return (unsigned char)*str1 - (unsigned char)*str2;
        str1++;
        str2++;
        count++;
    }
    return 0;
}