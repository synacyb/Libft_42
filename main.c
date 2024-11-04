#include "libft.h"
int main()
{
    char *res = ft_itoa(-2147483648LL);
    printf("%s", res);
    free(res);
}