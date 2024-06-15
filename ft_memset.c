/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 22:56:18 by jin-tan           #+#    #+#             */
/*   Updated: 2024/06/15 17:48:13 by jin-tan          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

// n bytes of value c to the string b

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ss;

	// type casting
	ss = (unsigned char *)s;
	while (n > 0)
	{
		// man: convert c to unsig char
		*ss = (unsigned char)c;
		ss++;
		n--;
	}
	return (s);
}
