#include "libft.h"

// memcpy() but handles memory overlapping
// if copies from beginning, else copies from end
// does it matter whether pre- or post- increment?

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char *altdst;
	unsigned char *altsrc;
	int i;

	altdst = (unsigned char *)dst;
	altsrc = (unsigned char *)src;
	i = 0;
	if (altdst < altsrc)
	{
		while (i < n)
		{
			i++;
			altdst[i] = altsrc[i];
		}
	}
	else
	{
		while (n > 0)
		{
			n--;
			altdst[n] = altsrc[n];
		}
	}
	return (dst);
}