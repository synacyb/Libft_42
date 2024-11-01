#include "libft.h"
#include <stdio.h>
#include <string.h>
void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *ptr_dest;
    ptr_dest = (unsigned char *)dest;
    const unsigned char *ptr_src;
    ptr_src = (const unsigned char *)src;
    if(ptr_dest > ptr_src)
    {
        while (n > 0)
        {
            *(ptr_dest + n - 1) = *(ptr_src + n - 1);
            n--;
        }
        return dest;
    }

    ft_memcpy(dest, src, n);
    return dest;
}
/*int main()
{
    char src[] = "ayoubadouay";
    char src2[] = "";
    memmove(src + 3, src, 5);
    ft_memmove(src + 3, src, 5);
    printf("using origin function : %s\n", src);
    printf("using ur function : %s\n", src);
}*/