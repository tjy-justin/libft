#include "libft.h"

// like memset but writes 0

void	ft_bzero(void *s, size_t n)
{
	char	*temp;

	temp = (char *)s;
	while (n > 0)
	{
		*temp = 0;
		temp++;
		n--;
	}
}
