#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    
    char *src = (char *)s + start;
    size_t i = 0;
    char *str = malloc((len + 1) * sizeof(char));
    if (!str)
    return NULL;
    if (len == 0)
        return 0;
    while (i < len)
    {
        *str = *src;
        str++;
        src++;
        i++;
    }
    *str = '\0';
    str = str - i;
    return str;
}