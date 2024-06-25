/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 18:04:23 by jin-tan           #+#    #+#             */
/*   Updated: 2024/06/26 05:03:56 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// strcat() string concat with size

// find the end of dst
// cannot concat
// append src to end of dst
// return len of dst+src

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	srclen;

	if (!n && (!src || !dst))
		return (0);
	j = 0;
	i = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (n <= i)
		return (n + srclen);
	while (src[j] && (i + j + 1) < n)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < n)
		dst[i + j] = '\0';
	return (i + srclen);
}
