#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t num, size_t size)
{
	char	*ptr;

	ptr = malloc(num * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (num * size));
	return (ptr);
}
