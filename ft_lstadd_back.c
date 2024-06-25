/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 01:27:09 by jin-tan           #+#    #+#             */
/*   Updated: 2024/06/26 01:47:07 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// add new node to end of list
// pass **lst to modify the pointer itself (in this case head)
// pass *lst to traverse and modify node content
// find last node
// set last node next address to new

// Head -> [Node1] -> NULL
// Head -> [Node1] -> [NewNode] -> NULL

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = ft_lstlast(*lst);
	if (!last)
		*lst = new;
	last->next = new;
}
