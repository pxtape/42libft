/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 12:50:35 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/08 23:56:46 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Insert a new node at the end of the linked list.
 *
 *	If the address of a pointer to first node of the linked list is NULL
 *	, IMPOSSIBLE TO INSERT.
 *	Otherwise
 *		If it is a empty linked list, Insert a new node to be the first one.
 *		If not, go through to last node and insert a new node.
 */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (!lst)
		return ;
	if (*lst)
	{
		last_node = ft_lstlast(*lst);
		last_node->next = new;
		return ;
	}
	*lst = new;
}
