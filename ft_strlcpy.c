#include "libft.h"
#include <stdio.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t len = ft_strlen(src);
    size_t count = 0;

    if (size == 0)
        return len;
    else if (*src == '\0')
        return 0;
    while (*src != '\0' && count < size - 1)
    {
        *dst = *src;
        dst++;
        src++;
        count++;
    }
    while (*src != '\0' && *dst)
	{
		*dst = '\0';
        src++;
	}
    return (len);
}