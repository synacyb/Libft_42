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
	const char	*ptr;

	ptr = s + (ft_strlen(s) - 1);
	while (ptr >= s)
	{
		if (*ptr == (char)c)
			return ((char *)ptr);
		ptr--;
	}
	if ((char)c == '\0')
		return ((char *)s + ft_strlen(s));
	return (NULL);
}
/*int main()
{
	char str[] = "";
	printf("ur fun : %s\n", ft_strrchr(str, NULL));
	printf("origin fun : %s\n", strrchr(str, NULL));
}*/