#include "libft.h"

// malloc() allocates size bytes of memory
// malloc() but set all bytes to 0

void	*ft_calloc(size_t count, size_t size)
{
	size_t i;
	unsigned char *dst;

	i = 0;
	dst = malloc(count * size);

	if (!dst)
	{
		return (NULL);
	}

	while (i < count * size)
	{
		dst[i++] = 0;
	}
	return (dst);
}