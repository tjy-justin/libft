/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 04:47:30 by jin-tan           #+#    #+#             */
/*   Updated: 2024/06/23 17:31:59 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// performs trimming, remove specified chars only at start & end
// middle is untouched

// trim start
// use strchr() to locate char

// trim end
// j - 1 ignores null
// j > i ignores start i-th chars

// find index difference and malloc

// copy to str

char	*ft_strtrim(const char *s1, const char *set)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
	{
		i++;
	}
	while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && j > i)
	{
		j--;
	}
	str = (char *)malloc((j - i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (str)
		ft_strlcpy(str, &s1[i], j - i + 1);
	return (str);
}
