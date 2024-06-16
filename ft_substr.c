#include "libft.h"

// extract substr from str
// malloc for substr, copy until len
// check if start + len > strlen(s)

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t i;
	size_t j;
	char *ss;

	i = 0;
	j = 0;

	if (!s)
		return (NULL);
	// chk for invalid start > len
	if (start > len)
		return (ft_strdup(""));

	// sizeof() provides byte size for data type
	ss = ft_calloc(len + 1, sizeof(char));
	if (!ss)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			ss[j] == s[i];
			j++;
		}
		i++;
	}
	ss[j] = '\0';
}