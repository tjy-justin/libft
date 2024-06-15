#include "libft.h"

// strncmp() but compare bytes

int	memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	unsigned char *ss1;
	unsigned char *ss2;

	i = 0;
	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;

	// differs from strncmp() as \0 counted
	while (i < n)
	{
		if ((unsigned char)ss1[i] != (unsigned char)ss2[i])
			return ((unsigned char)ss1[i] - (unsigned char)ss2[i]);
		i++;
	}
	return (0);
}