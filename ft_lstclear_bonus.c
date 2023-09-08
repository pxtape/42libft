/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:25:25 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/08 23:55:28 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Empty a node and every successor of that node by 
 *	deleting the content of each node and free all node.
 *	and make the pointer to that node with NULL
 *
 * 	If the address of a pointer to that node, NOTHING NEED TO DO.
 * 	If that node is already null, NOTHING TO DO.
 * 	If del function isn't defined, CAN'T DO ANYTHING.
 * 	Go through each node and delete content and free the node with ft_lstdelone()
 * 	(the pointer to that node will be NULL automatically at the end of the loop) 
 */

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;

	if (!lst || !*lst || !del)
		return ;
	while (*lst)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
}
