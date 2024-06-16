#include "libft.h"

// performs trimming, remove specified chars only at start & end
// middle is untouched

char	*ft_strtrim(const char *s1, const char *set)
{
	int i;
	int j;
	char *str;

	i = 0;
	j = ft_strlen(s1);

	// trim start
	// use strchr() to locate char
	while (s1[i] && ft_strchr(set, s1[i]))
	{
		i++;
	}

	// trim end
	// j - 1 ignores null
	// j > i ignores start i-th chars
	while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && j > i)
	{
		j--;
	}

	// find index difference and malloc
	str = (char *)malloc((j - i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	// copy to str
	if (str)
		ft_strlcpy(str, &s1[i], j - i + 1);
	return (str);
}