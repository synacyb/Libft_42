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

static int	set_size_of_string(long num)
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
	var[0] len;
	var[1] num;
	var[2] pos;
	var[3] i;
*/

char	*ft_itoa(int n)
{
	long	var[4];
	char	str[12];
	char	*origin;

	var[1] = n;
	var[0] = set_size_of_string(var[1]);
	var[3] = 0;
	var[2] = set_string(var[1], str);
	origin = malloc((var[0] + 1) * sizeof(char));
	if (!origin)
		return (NULL);
	if (var[1] < 0)
		origin[var[3]++] = '-';
	if (var[1] == 0)
		origin[var[3]++] = '0';
	else
	{
		while (var[2] >= 0)
			origin[var[3]++] = str[var[2]--];
	}
	origin[var[3]] = '\0';
	return (origin);
}
