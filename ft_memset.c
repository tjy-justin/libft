/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 22:56:18 by jin-tan           #+#    #+#             */
/*   Updated: 2024/06/15 17:14:32 by jin-tan          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

// len bytes of value c to the string b

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*bb;

	// type casting
	bb = (unsigned char *)b;
	while (len > 0)
	{
		// man: convert c to unsig char
		*bb = (unsigned char)c;
		bb++;
		len--;
	}
	return (b);
}
