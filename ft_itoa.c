/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadouay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:50:25 by ayadouay          #+#    #+#             */
/*   Updated: 2024/11/04 16:39:53 by ayadouay         ###   ########.fr       */
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

char	*ft_itoa(int n)
{
	int		len;
	long	num;
	char	str[12];
	char	*origin;
	int		pos;
	int		i;
	
	num = n;
	len = set_size_of_string(num);
	i = 0;
	pos = set_string(num, str);
	origin = malloc((len + 1) * sizeof(char));
	if (!origin)
		return (NULL);
	if (num < 0)
		origin[i++] = '-';
	if (num == 0)
		origin[i++] = '0';
	else
	{
		while (pos >= 0)
			origin[i++] = str[pos--];
	}
	origin[i] = '\0';
	return (origin);
}
