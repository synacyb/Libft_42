/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayadouay <ayadouay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:59:36 by ayadouay          #+#    #+#             */
/*   Updated: 2024/11/17 11:15:10 by ayadouay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static char	*count_len(char *s, char c, int *j)
{
	int	start;
	int	len;

	start = *j;
	len = 0;
	while (s[*j] && s[*j] != c)
	{
		len++;
		(*j)++;
	}
	return (ft_substr((const char *)s, (unsigned int)start, len));
}

static int	count_word(char *s, char check)
{
	int	size;
	int	i;

	size = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == check)
			i++;
		if (s[i])
			size++;
		while (s[i] && s[i] != check)
			i++;
	}
	return (size);
}

static	char	**ft_free(char **p, int i)
{
	while (--i >= 0)
		free(p[i]);
	free(p);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		nword;
	char	**ptr;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	nword = count_word((char *)s, c);
	ptr = (char **)malloc((nword + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	while (i < nword)
	{
		while (s[j] == c)
			j++;
		ptr[i] = count_len((char *)s, c, &j);
		if (ptr[i] == NULL)
			return (ft_free(ptr, i));
		i++;
	}
	ptr[i] = NULL;
	return (ptr);
}
