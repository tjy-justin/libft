#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dstlen;
	size_t srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);

	if (dstlen == dstsize)
	{
		return (dstlen + srclen);
	}
	else if (dstsize >= dstlen + srclen)
	{
		dst[dstsize + 1] = srclen;
	}
	else
	{
		ft_memcpy(dst + dstlen, src, dstsize - dstlen - 1);
	}

	return (dstlen + srclen);
}