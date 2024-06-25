/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-tan <jin-tan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 02:01:17 by jin-tan           #+#    #+#             */
/*   Updated: 2024/06/26 00:53:56 by jin-tan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// create a new node/element for linked list
// set content as input
// +----------+------------+
// | content  |    next    |
// +----------+------------+
// | "Hello"  |    NULL    |
// +----------+------------+

t_list	*ft_lstnew(void *content)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem->content = content;
	elem->next = NULL;
	return (elem);
}
