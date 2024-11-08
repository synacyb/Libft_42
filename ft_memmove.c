/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadouay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 09:49:20 by ayadouay          #+#    #+#             */
/*   Updated: 2024/11/08 09:49:22 by ayadouay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_src;
	unsigned char	*ptr_dest;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (n == 0 || dest == src)
		return (dest);
	if (ptr_dest > ptr_src)
	{
		while (n > 0)
		{
			*(ptr_dest + n - 1) = *(ptr_src + n - 1);
			n--;
		}
		return (dest);
	}
	ft_memcpy(dest, src, n);
	return (dest);
}
/*int main()
{
	char src[] = "ayoubadouay";
	char src2[] = "";
	memmove(src + 3, src, 5);
	ft_memmove(src + 3, src, 5);
	printf("using origin function : %s\n", src);
	printf("using ur function : %s\n", src);
}*/
