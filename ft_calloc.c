/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:32:46 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/07 13:41:45 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	[Overflow protected (original calloc)]
	The calculated total memory size need to match the expected number of items.
	If these conditions are not met, it returns NULL
*/

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*p;
	size_t	total;

	total = nitems * size;
	if (size != 0 && total / size != nitems)
		return (NULL);
	p = malloc(total);
	if (!p)
		return (NULL);
	ft_bzero(p, total);
	return (p);
}

/*
int	main(void)
{
	char	l[400];
	char	*p;

	p = calloc(400, 1);
	printf("%p\n", p);
	memset(l, 0, 400);
	if (!memcmp(l, p, 400))
		printf("\033[0;32m""OK\n""\033[0m");
	else
		printf("\033[0;31m""KO\n""\033[0m");
}
*/