/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadouay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:40:31 by ayadouay          #+#    #+#             */
/*   Updated: 2024/11/04 09:42:22 by ayadouay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head->content = content;
	head->next = NULL;
	return (head);
}

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