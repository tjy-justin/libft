/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 04:46:28 by jin-tan           #+#    #+#             */
/*   Updated: 2024/06/23 04:46:29 by jin-tan          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

// opposite of atoi(), convert num to str
// works with last position of i
// alloc mem by counting intlen
// as with putnbr(), convert by % 10, / 10

static int	ft_intlen(int nbr);

char	*ft_itoa(int n)
{
	int				i;
	unsigned int	len;
	unsigned int	nbr;
	char			*res;

	len = ft_intlen(n);
	nbr = n;
	// init i to last position
	i = len - 1;
	// + 1 for null term
	res = (char *)malloc((len + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	if (n < 0)
	{
		res[0] = '-';
		nbr = -nbr;
	}
	// res[i--] is the same as having a new line by i--
	if (nbr == 0)
	{
		res[i] = '0';
		i--;
	}
	while (nbr != 0)
	{
		res[i] = (nbr % 10) + '0';
		nbr /= 10;
		i--;
	}
	res[len] = '\0';
	return (res);
}

// counts int len
static int	ft_intlen(int nbr)
{
	int n;

	n = 0;
	if (nbr < 0)
		n++;
	if (nbr == 0)
		return (1);
	// /= until reaches 0
	while (nbr != 0)
	{
		nbr /= 10;
		n++;
	}
	return (n);
}