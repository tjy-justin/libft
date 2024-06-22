#include "libft.h"

static size_t	ft_toklen(const char *s, char c);

// split str by delimiter c
// allocates array for each str char

char	**ft_split(char const *s, char c)
{
	char	**tok;
	size_t	i;
	size_t	j;
	size_t	len;

	tok = 0;
	i = 0;
	j = 0;
	tok = malloc((ft_toklen(s, c) + 1) * sizeof(char *));
	if (!tok)
		return (0);
	while (s[i])
	{
		if (s[i] != c)
		{
			// reset len for each token
			len = 0;
			// count len until delim
			while (s[i] && s[i] != c && ++len)
				++i;
			// make substr from s - len
			// eg hello,world is s - 5 for hello
			tok[j++] = ft_substr(s - len, 0, len);
		}
		else
			s++;
		tok[i] = 0;
	}
	return (tok);
}

// count tokens
static size_t	ft_toklen(const char *s, char c)
{
	size_t tok;
	size_t i;
	size_t flag;

	tok = 0;
	i = 0;
	flag = 0;
	while (s[i])
	{
		// add token for each word by delim
		if (s[i] != c && flag == 0)
		{
			flag = 1;
			tok++;
		}
		else if (s[i] == c)
			flag = 0;
		i++;
	}
	return (tok);
}