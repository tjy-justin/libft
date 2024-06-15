#include "libft.h"

// strcmp() but limited by n chars
// compare str instead of binary data, after '\0' not compared

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	while ((s1[i] && s2[i]) && i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			// non-unsig char > 127 = -ve
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}