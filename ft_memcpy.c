/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadouay <ayadouay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 06:58:52 by ayadouay          #+#    #+#             */
/*   Updated: 2024/11/15 20:45:08 by ayadouay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	size_t				count;
	unsigned char		*ptr1;
	unsigned char		*ptr2;

	ptr1 = (unsigned char *)dest;
	ptr2 = (unsigned char *)src;
	count = 0;
	if (ptr1 == NULL && ptr2 == NULL)
		return (NULL);
	if (ptr1 == ptr2)
		return (NULL);
	while (count < size)
	{
		*ptr1 = *ptr2;
		ptr1++;
		ptr2++;
		count++;
	}
	return (dest);
}
