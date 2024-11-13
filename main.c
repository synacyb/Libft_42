#include "libft.h"
#include <fcntl.h>

void del_content(void *s)
{
    free(s);
}
int main()
{
    char s[] = "ayoub adouay chwi he ";
    char **res = ft_split(s, ' ');

    while (*res != NULL)
    {
        printf("%s\n", *res);
        res++;
    }
}