/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 04:47:01 by jin-tan           #+#    #+#             */
/*   Updated: 2024/06/23 17:45:35 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// locates 1 char in string

// man: convert c to char
// return a pointer to the located char
// char * pointer to &s[i] char
// & returns the value of non-pointers
// check for '\0'
// no match = return (NULL);

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	cc;

	cc = (char)c;
	i = 0;
	while (s[i])
	{
		if (cc == s[i])
			return ((char *)&s[i]);
		i++;
	}
	if (cc == s[i])
		return ((char *)&s[i]);
	return (NULL);
}

// if (cc == *s)
// 	return ((char *)s);
// s++;