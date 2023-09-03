/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:32:46 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/03 13:30:10 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*p;

	p = malloc(size * nitems);
	if (!p)
		return (NULL);
	ft_bzero(p, size * nitems);
	return (p);
}

/*
int	main(void)
{
	char	*p;
	// char	l[400];

	// p = calloc(100, 4);
	// p = ft_calloc(100, 4);
	// memset(l, 0, 400);
	// if (!memcmp(l, p, 400))
	// 	printf("\033[0;32m""OK\n""\033[0m");
	// else
	// 	printf("\033[0;31m""KO\n""\033[0m");
}
*/