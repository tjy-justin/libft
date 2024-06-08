#include "libft.h"

// memcpy() but handles memory overlapping
// if copies from beginning, else copies from end
// does it matter whether pre- or post- increment?

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *altdst;
	unsigned char *altsrc;
	int i;

	altdst = (unsigned char *)dst;
	altsrc = (unsigned char *)src;
	i = 0;
	if (altdst < altsrc)
	{
		while (i < len)
		{
			i++;
			altdst[i] = altsrc[i];
		}
	}
	else
	{
		while (len > 0)
		{
			len--;
			altdst[len] = altsrc[len];
		}
	}
	return (dst);
}