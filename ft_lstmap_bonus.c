/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 16:54:42 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/09 00:06:00 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Create a new list resulting of the successive 
 *	application of the function f().
 *
 *
 *	If a node is NULL, NOTHING TO DO.
 *	If f() or del() is NULL, CAN'T DO ANYTHING.
 *
 *	Keep first node and last node to make the process 
 *	in O(N) time complexity.
 *	Get each content from f() and put it in new node.
 *	If new node is unsuccessfully allocated then 
 *	deleted all the content and all node which have been created.
 *	Otherwise, put the new node to the end of the linked list.
 */

static void	insert_last(t_list **f_node, t_list **l_node, t_list *new)
{
	if (!*f_node)
	{
		*f_node = new;
		*l_node = new;
	}
	else
	{
		(*l_node)->next = new;
		*l_node = new;
	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*last_node;
	t_list	*new_node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		content = (*f)(lst->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			(*del)(content);
			if (new_lst)
				ft_lstclear(&new_lst, del);
			return (NULL);
		}
		insert_last(&new_lst, &last_node, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
