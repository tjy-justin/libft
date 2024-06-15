#include "libft.h"

// returns str length

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// while (s[i] != '\0')