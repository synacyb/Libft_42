/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadouay <ayadouay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 09:39:51 by ayadouay          #+#    #+#             */
/*   Updated: 2024/11/16 13:35:31 by ayadouay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*str1;
	unsigned char	to_find;
	size_t			count;

	count = 0;
	str1 = (unsigned char *)str;
	to_find = (unsigned char)c;
	while (count < n)
	{
		if (*str1 == to_find)
			return ((void *)str1);
		str1++;
		count++;
	}
	return (NULL);
}
