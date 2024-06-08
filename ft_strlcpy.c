#include "libft.h"

// we can use memcpy()
// +1 handles null
// if for when dst have enough byte for src
// elif for when truncating src is needed
// why dstsize -1?

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t srclen;

	srclen = ft_strlen(src);
	if (dstsize > srclen + 1)
	{
		ft_memcpy(dst, src, srclen + 1);
	}
	else if (dstsize != 0)
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = 0;
	}
	return (srclen);
}