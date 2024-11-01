/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadouay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:46:38 by ayadouay          #+#    #+#             */
/*   Updated: 2024/10/23 16:47:35 by ayadouay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <ctype.h>

int	ft_toupper(int c)
{
	char	ch;

	ch = (unsigned char)c;
	if (ch >= 97 && ch <= 122)
	{
		ch -= 32;
		return (ch);
	}
	return (ch);
}
/*int main()
{
    char c = 'g';
    printf("%c", ft_toupper(c));
}*/
