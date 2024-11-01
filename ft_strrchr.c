/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadouay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:37:23 by ayadouay          #+#    #+#             */
/*   Updated: 2024/10/24 13:37:29 by ayadouay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char *ptr = s + (ft_strlen(s) - 1);
	if(*s == 0)
		return 0;
    while(ptr >= s)
	{
		if(*ptr == (unsigned char)c)
			return (char *)ptr;
		ptr--;
	}
	return NULL;
}
