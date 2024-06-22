/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 18:06:33 by jin-tan           #+#    #+#             */
/*   Updated: 2024/06/23 04:47:26 by jin-tan          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

// strstr() locates substr in str
// finds needle *find in a haystack *s
// strstr() with size

char	*ft_strnstr(const char *s, const char *find, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;

	if (find[0] == '\0')
		return ((char *)s);

	while (s[i] && i < len)
	{
		while (s[i + j] && s[i + j] == find[j] && i + j < len)
		{
			j++;
			// full match found
			if (find[j] == '\0')
				// points to the substr of haystack
				return ((char *)s + i);
		}
		i++;
		// ensures each i compared with beginning j
		j = 0;
	}
	return (NULL);
}