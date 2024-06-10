#include "libft.h"

// strchr() but returns last occurence
// only return at last

char	*ft_strrchr(const char *s, int c)
{
	int i;
	char cc;
	char last;

	cc = (char *)c;
	// returns as NULL by default if no match
	// else value returned at last
	last = NULL;
	while (s[i])
	{
		if (cc == s[i])
			last = (char *)&s[i];
	}

	if (cc == s[i])
		last = (char *)&s[i];
	return (last);
}