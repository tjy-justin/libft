/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 04:46:13 by jin-tan           #+#    #+#             */
/*   Updated: 2024/06/23 05:11:55 by jin-tan          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

// malloc() allocates size bytes of memory
// malloc() but set all bytes to 0

void	*ft_calloc(size_t count, size_t size)
{
	size_t i;
	unsigned char *dst;

	i = 0;

	dst = malloc(count * size);

	if (!dst)
		return (NULL);

	while (i < count * size)
		dst[i++] = 0;
	return (dst);
}