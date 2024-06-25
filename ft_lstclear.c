/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 03:00:18 by jin-tan           #+#    #+#             */
/*   Updated: 2024/06/26 03:19:20 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// delete a node and its following sequential nodes
// -> has higher precedence over *
// (*lst) ensures lst is dereferenced first
// move to next node

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	while (lst)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		*lst = tmp;
	}
	free(*lst);
	*lst = NULL;
}
