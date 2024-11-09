/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadouay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:32:53 by ayadouay          #+#    #+#             */
/*   Updated: 2024/11/08 11:32:59 by ayadouay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cpy;

	cpy = *lst;
	if (!lst || !del)
		return ;
	while ((*lst) != NULL)
	{
		cpy = cpy->next;
		del((*lst)->content);
		free(*lst);
		(*lst) = cpy;
	}
}
