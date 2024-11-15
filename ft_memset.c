/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadouay <ayadouay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:06:25 by ayadouay          #+#    #+#             */
/*   Updated: 2024/11/15 11:25:15 by ayadouay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			count;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	count = 0;
	while (count < n)
	{
		*ptr = (unsigned char)c;
		count++;
		ptr++;
	}
	return (s);
}
