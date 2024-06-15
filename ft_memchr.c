#include "libft.h"

// strchr() but works with byte (non-literal) string (void *)

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char *ss;
	unsigned char cc;

	ss = (unsigned char *)s;
	cc = (unsigned char)c;
	i = 0;

	while (i <= n)
	{
		if (ss[i] == cc)
		{
			return ((void *)&ss[i]);
		}

		i++;
	}

	// no check for null-termination as it is not string
	return (NULL);
}