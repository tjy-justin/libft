/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 04:46:58 by jin-tan           #+#    #+#             */
/*   Updated: 2024/06/23 18:21:20 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**ft_alloc(size_t size);
static size_t	ft_toklen(const char *s, char c);

// split str by delimiter c
// allocates array for each str char

// reset len for each token
// count len until delim
// make substr from s - len
// eg hello,world is s - 5 for hello
// add token for each word by delim

char	**ft_split(char const *s, char c)
{
	char	**tok;
	size_t	i;
	size_t	j;
	size_t	len;

	tok = ft_alloc(ft_toklen(s, c) + 1);
	if (!s || !tok)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			len = 0;
			while (s[i + len] && s[i + len] != c)
				len++;
			tok[j++] = ft_substr(s + i, 0, len);
			i += len;
		}
		else
			i++;
	}
	tok[j] = NULL;
	return (tok);
}

static char	**ft_alloc(size_t size)
{
	char	**tok;

	tok = malloc(size * sizeof(char *));
	if (!tok)
		return (NULL);
	return (tok);
}

static size_t	ft_toklen(const char *s, char c)
{
	size_t	tok;
	size_t	i;
	size_t	flag;

	if (!s)
		return (0);
	tok = 0;
	i = 0;
	flag = 0;
	while (s[i])
	{
		if (s[i] != c && flag == 0)
		{
			flag = 1;
			tok++;
		}
		else if (s[i] == c)
			flag = 0;
		i++;
	}
	return (tok);
}
