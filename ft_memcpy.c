#include "libft.h"

// copies max of n bytes from src to dst
// safer to use unsigned char

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *altdst;
	unsigned char *altsrc;

	altdst = (unsigned char *)dst;
	altsrc = (unsigned char *)src;

	while (n > 0)
	{
		*altdst = *altsrc;
		altdst++;
		altsrc++;
		n--;
	}
	return (dst);
}