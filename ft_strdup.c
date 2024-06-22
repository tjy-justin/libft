/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 04:47:04 by jin-tan           #+#    #+#             */
/*   Updated: 2024/06/23 04:47:05 by jin-tan          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

// similar to strcpy()
// allocates mem for str, copies str to mem

char	*ft_strdup(const char *s1)
{
	size_t i;
	char *dst;

	i = 0;

	// find # of bytes to alloc
	dst = (char *)malloc(ft_strlen(s1) + 1);
	if (!dst)
		return (NULL);

	while (s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}