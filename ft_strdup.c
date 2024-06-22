#include "libft.h"

// similar to strcpy()
// allocates mem for str, copies str to mem

char	*ft_strdup(const char *s1)
{
	size_t i;
	char *dst;

	// find # of bytes to alloc
	dst = (char *)malloc(ft_strlen(s1) + 1);

	if (!dst)
		return (NULL);

	while (s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}