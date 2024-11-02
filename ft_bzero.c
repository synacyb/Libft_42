#include "libft.h"
#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			count;
	unsigned char	*ptr;

	count = 0;
	ptr = (unsigned char *)s;
	while (count < n)
	{
		*ptr = '\0';
		count++;
		ptr++;
	}
}
