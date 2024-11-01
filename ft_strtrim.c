#include "libft.h"
#include <stdio.h>
int  checker(char s, char const *set)
{
    int i = 0;
    
    while (set[i])
    {
        if (set[i] == s)
        {
            return 1;
        }
        i++;
    }
    return 0;
}

char *ft_strtrim(char const *s1, char const *set)
{
    int start = 0;
    int len = ft_strlen(s1) - 1;
    char *ptr;
    while (checker(s1[start], set))
    {
        start++;
    }
    while (checker(s1[len] ,set) && len > start) 
    {
        len--;
    }
    ptr = ft_substr(s1, start, (len + 1) - start);
    return ptr;
}
/*int main()
{
  char s1[] = "gggggg";
  char set[] = "g";
  printf("%s\n", ft_strtrim(s1, set));
}*/