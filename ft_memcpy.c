/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 17:51:03 by jin-tan           #+#    #+#             */
/*   Updated: 2024/06/23 04:46:37 by jin-tan          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

// copies max of n bytes from src to dst

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *altdst;
	unsigned char *altsrc;

	altdst = (unsigned char *)dst;
	altsrc = (unsigned char *)src;

	while (n > 0)
	{
		*altdst = *altsrc;
		altdst++;
		altsrc++;
		n--;
	}
	return (dst);
}