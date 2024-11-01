#include "libft.h"
#include <stdlib.h>

char *ft_strdup(const char *str)
{
    char *ptr;
    size_t len = ft_strlen(str);
    ptr = malloc((len + 1) * sizeof(char));
    if(!ptr)
        return NULL;
    ft_memcpy(ptr, str, len);
    *(ptr + len) = '\0';
    return ptr;
}