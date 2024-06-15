#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t srclen;

	srclen = ft_strlen(src);
	// + 1 ensures null included in string
	// when dst have enough byte for src
	if (n > srclen + 1)
	{
		ft_memcpy(dst, src, srclen + 1);
	}
	// when truncating src is needed
	else if (n != 0)
	{
		ft_memcpy(dst, src, n - 1);
		// why n -1?
		dst[n - 1] = 0;
	}
	return (srclen);
}