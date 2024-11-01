/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadouay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:51:52 by ayadouay          #+#    #+#             */
/*   Updated: 2024/10/23 16:51:55 by ayadouay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <ctype.h>

int	ft_tolower(int c)
{
	char	ch;

	ch = (unsigned char)c;
	if (ch >= 65 && ch <= 90)
	{
		ch += 32;
		return (ch);
	}
	return (ch);
}
/*int main()
{
    char c = 'G';
    printf("%c", ft_tolower(c));
}*/
