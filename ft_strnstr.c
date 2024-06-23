/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 18:06:33 by jin-tan           #+#    #+#             */
/*   Updated: 2024/06/23 17:12:56 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// strstr() locates substr in str
// finds needle *find in a haystack *s
// strstr() with size
// full match found
// points to the substr of haystack
// ensures each i compared with beginning j

char	*ft_strnstr(const char *s, const char *find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (find[0] == '\0')
		return ((char *)s);
	while (s[i] && i < len)
	{
		while (s[i + j] && s[i + j] == find[j] && i + j < len)
		{
			j++;
			if (find[j] == '\0')
				return ((char *)s + i);
		}
		i++;
		j = 0;
	}
	return (NULL);
}
