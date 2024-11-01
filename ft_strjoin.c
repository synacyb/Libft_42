#include "libft.h"
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    if (!s2 || !s1)
        return NULL;
    size_t len1 = ft_strlen(s1);
    size_t len2 = ft_strlen(s2);
    char *ptr = malloc((len1 + len2 + 1) * sizeof(char));
    if (!ptr)
        return NULL;
    ft_memcpy(ptr , s1, len1);
    ft_memcpy(ptr + len1 , s2, len2);
    ptr[len1 + len2] = '\0';
    return ptr;
}