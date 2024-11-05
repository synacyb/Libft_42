#include "libft.h"

int main()
{
  
  t_list *head = ft_lstnew("nod1");
  t_list *nod2 = ft_lstnew("nod2");
  t_list *nod3 = ft_lstnew("nod3");
  
  ft_lstadd_front(&head, nod2);
  ft_lstadd_front(&head, nod3);

  printf("%d\n", ft_lstsize(head));
  while(head != NULL)
  {
    printf("%s\n", (char *)head->content);
    head = head->next;
  }
  return 0;
}