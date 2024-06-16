/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 18:04:34 by jin-tan           #+#    #+#             */
/*   Updated: 2024/06/16 18:04:56 by jin-tan          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

// memcpy() but handles memory overlapping

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char *altdst;
	unsigned char *altsrc;
	int i;

	altdst = (unsigned char *)dst;
	altsrc = (unsigned char *)src;
	i = 0;

	// copies from start
	if (altdst < altsrc)
	{
		while (i < n)
		{
			i++;
			altdst[i] = altsrc[i];
		}
	}

	// copies from end
	else
	{
		while (n > 0)
		{
			altdst[n] = altsrc[n];
			n--;
		}
	}
	return (dst);
}