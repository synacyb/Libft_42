/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadouay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:23:53 by ayadouay          #+#    #+#             */
/*   Updated: 2024/11/08 10:23:55 by ayadouay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	sln;
	size_t	dln;
	size_t	pdst;
	size_t	i;

	if (dstsize == 0 && !dst && *src != '\0')
		return (ft_strlen(src));
	sln = ft_strlen(src);
	dln = ft_strlen(dst);
	pdst = dln;
	i = 0;
	if (dstsize <= dln || dstsize == 0)
		return (dstsize + sln);
	while (src[i] != '\0' && i < (dstsize - dln - 1))
	{
		dst[pdst] = src[i];
		pdst++;
		i++;
	}
	dst[pdst] = '\0';
	return (dln + sln);
}
