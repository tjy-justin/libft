#include "libft.h"

// malloc() allocates size bytes of memory
// malloc() but set all bytes to 0

void	*ft_calloc(size_t count, size_t size)
{
	size_t i;
	unsigned char *heap;

	i = 0;
	heap = malloc(count * size);

	if (!heap)
	{
		return (NULL);
	}

	while (i < count * size)
	{
		heap[i++] = 0;
	}
	return (heap);
}