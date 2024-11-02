#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    if (needle[i] == '\0')
        return (char *)haystack;
    if(len == 0)
        return NULL;
    while (haystack[i] != '\0' && i < len)
    {
        j = 0;
        while(haystack[i + j] == needle[j] && needle[j] != '\0' && i + j < len)
            j++;
        
        if(needle[j] == '\0')
            return (char *)(haystack + i);
        i++;
    }
    return NULL;
}
