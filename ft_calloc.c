/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:32:46 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/08 23:54:17 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * 	Calloc allocates enough space for count objects 
 * 	that are size bytes of memory each and returns a pointer
 * 	to allocated memory.
 *	If is an error to allocate memory, returns NULL.
 *
 * 	[Addition: Overflow Protected]
 * 	The calculated total memory size need to match 
 * 	the expected number of items.
 * 	If these conditions are not met, it returns NULL
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
