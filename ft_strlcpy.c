#include "libft.h"
#include <stdio.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t len = ft_strlen(src);
    size_t count = 0;

    if (size == 0)
        return len;
    while (*src != '\0' && count < size - 1)
    {
        *dst = *src;
        dst++;
        src++;
        count++;
    }
    *dst = '\0';
    return (len);
}
/*int main()
{
    char dst[15] = "";
    printf("%zu", strlcpy(dst, "", 15));
}*/