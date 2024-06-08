/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 22:56:18 by jin-tan           #+#    #+#             */
/*   Updated: 2024/06/08 14:25:42 by jin-tan          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

// len bytes of value c to the string b
// c must be unsigned char, so b should be converted
// L22 is type casting

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*temp;

	temp = (unsigned char *)b;
	while (len > 0)
	{
		*temp = (unsigned char)c;
		temp++;
		len--;
	}
	return (b);
}
