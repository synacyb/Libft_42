/*#include "libft.h"
#include <string.h>
void    delet(void *s)
{
    free(s);
    printf("\nis free it");
}
void f(void *counter)
{
    char *s = (char *)counter;

    while (*s != '\0')
    {
        *s += 1;
        s++;
    }
}
int main()
{
    char *s = malloc(5*sizeof(char));
    ft_memcpy(s,"abc",5);

    t_list *head = ft_lstnew(s);
    ft_lstiter(head, f);
    printf("%s", head->content);
}*/