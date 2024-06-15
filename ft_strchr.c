#include "libft.h"

// locates 1 char in string

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	cc;

	// man: convert c to char
	cc = (char)c;
	while (s[i])
	{
		if (cc == s[i])
			// return a pointer to the located char
			// char * pointer to &s[i] char
			// & returns the value of non-pointers
			return ((char *)&s[i]);
		i++;
	}
	// check for '\0'
	if (cc == s[i])
		return ((char *)&s[i]);
	// no match = return (NULL);
	return (NULL);
}

// if (cc == *s)
// 	return ((char *)s);
// s++;