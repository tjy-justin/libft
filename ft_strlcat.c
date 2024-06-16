/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 18:04:23 by jin-tan           #+#    #+#             */
/*   Updated: 2024/06/16 18:04:24 by jin-tan          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

// strcat() string concat with size

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t dstlen;
	size_t srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);

	if (dstlen == n)
	{
		return (dstlen + srclen);
	}
	else if (n >= dstlen + srclen)
	{
		dst[n + 1] = srclen;
	}
	else
	{
		ft_memcpy(dst + dstlen, src, n - dstlen - 1);
		dst[n - 1] = 0;
	}

	return (dstlen + srclen);
}