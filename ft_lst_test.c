/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsttest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 10:34:35 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/03 11:35:07 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

static void	strupper(void *ptr)
{
	char	*str;

	str = (char *)ptr;
	while (*str)
	{
		*str = ft_toupper(*str);
		str++;
	}
}

static void	print_strlist(t_list *lst)
{
	while (lst)
	{
		printf("%s\n", (char *)(lst->content));
		lst = lst->next;
	}
}

/*
int	main(void)
{
	t_list *lst = NULL;
	t_list *new_lst;

	ft_lstadd_back(&lst, ft_lstnew((ft_strdup("World!"))));
	printf("%p, %s\n", lst, (char *)(lst->content));
	
	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("Hello")));
	printf("%p, %s\n", lst, (char *)(lst->content));

	ft_lstadd_back(&lst, ft_lstnew((ft_strdup("Nice"))));
	ft_lstadd_back(&lst, ft_lstnew((ft_strdup("To"))));
	ft_lstadd_back(&lst, ft_lstnew((ft_strdup("Meet"))));
	ft_lstadd_back(&lst, ft_lstnew((ft_strdup("You!"))));
	printf("%p = %p, %s\n", ft_lstlast(lst), lst->next->next->next->next->next, 
	(char *)((ft_lstlast(lst))->content));


	ft_lstiter(lst, strUpper);
	print_strlist(lst);
	printf("size = %d\n", ft_lstsize(lst));


	// new_lst = ft_lstmap(lst, ft_strdup(), free);
	// print_strlist(new_lst);
	// ft_lstclear(&new_lst, free);
	
	// ft_lstdelone(ft_lstnew(ft_strdup("Greet!")), free);
	
	ft_lstclear(&lst, free);
}
*/