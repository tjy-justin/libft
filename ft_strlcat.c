/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 18:04:23 by jin-tan           #+#    #+#             */
/*   Updated: 2024/06/23 04:47:12 by jin-tan          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

// strcat() string concat with size

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t i;
	size_t j;
	size_t srclen;

	j = 0;
	// find the end of dst
	i = ft_strlen(dst);
	srclen = ft_strlen(src);

	// cannot concat
	if (n <= i)
		return (n + srclen);

	// append src to end of dst
	while (src[j] && (i + j + 1) < n)
	{
		dst[i + j] = src[j];
		j++;
	}

	if (i < n)
		dst[i + j] = '\0';
	// return len of dst+src
	return (i + srclen);
}