/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 12:31:50 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/09 00:03:03 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Insert the new node at the front of linked list.
 *
 *	If the address of a pointer of the first node is NULL
 *	, IMPOSSIBLE TO INSERT.
 *	Otherwise
 *		If the linked list is not empty, then connect a new node 
 *		to the first node of linked list.
 *		Then make a new node to be the first one of the linked list.
 */

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst)
		return ;
	if (*lst)
		new->next = *lst;
	*lst = new;
}
