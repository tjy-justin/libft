/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 01:02:59 by jin-tan           #+#    #+#             */
/*   Updated: 2024/06/26 03:19:18 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// add new node to beginning of list
// set new next address to point at 1st node
// set 1st node address to next node

// Head -> [Node1] -> NULL
// [NewNode] -> [Node1] -> NULL
// Head -> [NewNode] -> [Node1] -> NULL

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
