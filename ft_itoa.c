/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadouay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:50:25 by ayadouay          #+#    #+#             */
/*   Updated: 2024/11/05 09:32:28 by ayadouay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	int	set_size_of_string(long num)
{
	int	counter;

	counter = 0;
	if (num < 0)
	{
		num = num * -1;
		counter = 1;
	}
	else if (num == 0)
		counter++;
	while (num > 0)
	{
		num = num / 10;
		counter++;
	}
	return (counter);
}

static	int	set_string(long num, char *str)
{
	char	res;
	int		index;

	index = 0;
	if (num < 0)
		num = num * -1;
	while (num > 0)
	{
		res = (num % 10) + 48;
		*str = res;
		str++;
		index++;
		num = num / 10;
	}
	index--;
	return (index);
}

/*
	ra[0] len;
	ra[1] num;
	ra[2] pos;
	ra[3] i;
*/
char	*ft_itoa(int n)
{
	long	ra[4];
	char	str[12];
	char	*origin;

	ra[1] = n;
	ra[0] = set_size_of_string(ra[1]);
	ra[3] = 0;
	ra[2] = set_string(ra[1], str);
	origin = malloc((ra[0] + 1) * sizeof(char));
	if (!origin)
		return (NULL);
	if (ra[1] < 0)
		origin[ra[3]++] = '-';
	if (ra[1] == 0)
		origin[ra[3]++] = '0';
	else
	{
		while (ra[2] >= 0)
			origin[ra[3]++] = str[ra[2]--];
	}
	origin[ra[3]] = '\0';
	return (origin);
}
