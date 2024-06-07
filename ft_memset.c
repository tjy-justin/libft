#include "libft.h"
#include <stdio.h>
#include <string.h>

// len bytes of value c to the string b

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*temp;

	temp = (unsigned char *)b; // type casting
	while (len > 0)
	{
		*(temp++) = (unsigned char)c;
		len--;
	}
	return (b);
}

// while (len > 0)
// {
// 	temp[i] = (unsigned char)c;
// 	i++;
// 	len--;
// }