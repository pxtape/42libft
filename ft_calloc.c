/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:32:46 by snetrasi          #+#    #+#             */
/*   Updated: 2023/08/27 14:54:36 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	malloc handle total_byte already
	1. if malloc can't allocate memory it will return NULl and put in error
*/

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*p;

	p = malloc(size * nitems);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, size * nitems);
	return (p);
}
