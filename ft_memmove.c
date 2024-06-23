/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 18:04:34 by jin-tan           #+#    #+#             */
/*   Updated: 2024/06/23 18:27:07 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// memcpy() but handles memory overlapping

// copies from start
// copies from end

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*altdst;
	unsigned char	*altsrc;
	size_t			i;

	if (!dst || !src)
		return (NULL);
	altdst = (unsigned char *)dst;
	altsrc = (unsigned char *)src;
	i = 0;
	if (altdst < altsrc)
	{
		while (i < n)
		{
			altdst[i] = altsrc[i];
			i++;
		}
	}
	else
	{
		while (n-- > 0)
			altdst[n] = altsrc[n];
	}
	return (dst);
}
