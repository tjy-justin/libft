/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 01:10:45 by jin-tan           #+#    #+#             */
/*   Updated: 2024/06/26 03:44:08 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// count # of nodes in list
// declare tmp pointer to address

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	int		i;

	tmp = lst;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
