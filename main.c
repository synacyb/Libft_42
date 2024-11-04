#include "libft.h"
int main()
{
    char *res = ft_itoa(-2147483648);
    printf("%s", res);
    free(res);
}