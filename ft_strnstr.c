#include "libft.h"

// locates substring in a string
// finds needle in a haystack

char	*ft_strnstr(const char *s, const char *find, size_t slen)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (find[0] == '\0')
	{
		return ((char *)s);
	}
	while (s[i] && i < slen)
	{
		while (s[i + j] == find[j] && i + j < slen)
		{
			return ((char *)s);
		}
		i++;
	}
	return (NULL);
}

// strstr() impl.
// while (str[i] != '\0')
// {
//     while (str[i + j] == to_find[j]) // if str[i] loop exits  w/o match
//     {
//         if (to_find[j + 1] == '\0') // reaches end of j
//         {
//             return (str + i); // returns rest of str
//         }
//         j++;
//     }
//     i++;
// }