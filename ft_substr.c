/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 04:47:32 by jin-tan           #+#    #+#             */
/*   Updated: 2024/06/23 16:06:36 by jin-tan          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

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
	// check for out of bounds
	// start >= len and s + start < len
	// allocate empty str and
	// allocate proper sslen
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);

	// sizeof() provides byte size for data type
	ss = ft_calloc(len + 1, sizeof(char));
	if (!ss)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			ss[j] = s[i];
			j++;
		}
		i++;
	}
	ss[j] = '\0';
	return (ss);
}