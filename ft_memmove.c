#include "libft.h"

// memcpy() but handles memory overlapping

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char *altdst;
	unsigned char *altsrc;
	int i;

	altdst = (unsigned char *)dst;
	altsrc = (unsigned char *)src;
	i = 0;

	// copies from start
	if (altdst < altsrc)
	{
		while (i < n)
		{
			i++;
			altdst[i] = altsrc[i];
		}
	}

	// copies from end
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