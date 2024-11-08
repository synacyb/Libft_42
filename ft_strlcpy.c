/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadouay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:26:06 by ayadouay          #+#    #+#             */
/*   Updated: 2024/11/08 10:26:09 by ayadouay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	count;

	len = ft_strlen(src);
	count = 0;
	if (size == 0)
		return (len);
	while (*src != '\0' && count < size - 1)
	{
		*dst = *src;
		dst++;
		src++;
		count++;
	}
	*dst = '\0';
	return (len);
}
