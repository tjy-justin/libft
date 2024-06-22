/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 04:47:28 by jin-tan           #+#    #+#             */
/*   Updated: 2024/06/23 04:47:28 by jin-tan          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

// strchr() locates char in str
// strchr() but returns last occurence

char	*ft_strrchr(const char *s, int c)
{
	int i;
	char cc;
	char *last;

	i = 0;
	cc = (char)c;
	// returns as NULL by default if no match
	// else value returned at last
	last = NULL;
	while (s[i])
	{
		if (cc == s[i])
			last = (char *)&s[i];
		i++;
	}

	if (cc == s[i])
		last = (char *)&s[i];
	return (last);
}