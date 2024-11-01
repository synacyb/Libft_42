#include "libft.h"

int ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
    const unsigned char *s1 = ptr1;
    const unsigned char *s2 = ptr2;
    size_t count = 0;
    
    while(count < n && (*s1 != '\0' || *s2 != '\0'))
    {
        if (*s1 != *s2)
            return *s1 - *s2;
        s1++;
        s2++;
        count++;
    }
    return 0;
}