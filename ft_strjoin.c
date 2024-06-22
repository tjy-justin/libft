#include "libft.h"

// strlcat() but handles mem alloc

char	*ft_strjoin(const char *s1, const char *s2)
{
	char *str;
	int i;
	int j;

	i = 0;
	j = 0;
	// malloc is n * size
	str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!str)
		return (NULL);

	// copy s1
	while (s1[i])
		str[j++] = s1[i++];

	// reset index, copy s2
	i = 0;
	while (s2[i])
		str[j++] = s2[i++];
	str[j] = '\0';
	return (str);
}