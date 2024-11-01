#include "libft.h"
#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    unsigned int len;
    char *new_str;
    
    if(s == NULL || f == NULL)
        return NULL;
    len = ft_strlen(s);
    
    new_str = malloc((len + 1) * sizeof(char));
    if(!new_str)
        return (NULL);
    i = 0;
    while (i < len)
    {
        new_str[i] = f(i, s[i]);
        i++;
    }
    new_str[i] = '\0';
    return new_str; 
}