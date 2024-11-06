#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t sln;
    size_t dln;
    size_t pdst;
    size_t i;

    sln = ft_strlen(src);
    dln = ft_strlen(dst);
    pdst = dln;
    i = 0;
    
    if(dstsize <= dln || dstsize == 0)
        return (dstsize + sln);
    
    while (*src && i < (dstsize - dln - 1))
    {
        dst[pdst] = src[i];
        pdst++;
        i++;
    }
    dst[pdst] = '\0';
    return (dln + sln);
}
/*int main()
{
    char s1[] = "pqrstuvwxyz";
    char s2[] = "abcd";
    printf("%zu\n", ft_strlcat(s1, s2, 20));
    //printf("%s", s1);
    return 0;
}*/