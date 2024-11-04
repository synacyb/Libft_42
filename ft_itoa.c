/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadouay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:50:25 by ayadouay          #+#    #+#             */
/*   Updated: 2024/11/04 16:09:30 by ayadouay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	int	set_size_of_string(int n)
{
	int	counter;

	counter = 0;
	if (n < 0)
	{
		n = n * -1;
		counter = 1;
	}
	else if (n == 0)
		counter++;
	while (n > 0)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}

static	int	set_string(int n, char *str)
{
	char	res;
	long	num;
	int		index;

	num = n;
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
	char	str[12];
	char	*origin;
	int		pos;
	int		i;

	len = set_size_of_string(n);
	i = 0;
	pos = set_string(n, str);
	origin = malloc((len + 1) * sizeof(char));
	if (!origin)
		return (NULL);
	if (n < 0)
		origin[i++] = '-';
	if (n == 0)
		origin[i++] = '0';
	else
	{
		while (pos >= 0)
			origin[i++] = str[pos--];
	}
	origin[i] = '\0';
	return (origin);
}
