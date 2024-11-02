#include "libft.h"
#include <stdio.h>

/*void to_upper(unsigned int i, char *c)
{
  *c += i;
}*/

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    int i;
    size_t len;

    if (!s || !f)
        return;

    i = 0;
    len = strlen(s);
    while (s[i] != '\0')
    {
        f(i, &s[i]);
        i++;
    }
}