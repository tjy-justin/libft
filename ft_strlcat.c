#include "libft.h"

// strcat() string concat with size

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t dstlen;
	size_t srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);

	if (dstlen == n)
	{
		return (dstlen + srclen);
	}
	else if (n >= dstlen + srclen)
	{
		dst[n + 1] = srclen;
	}
	else
	{
		ft_memcpy(dst + dstlen, src, n - dstlen - 1);
	}

	return (dstlen + srclen);
}