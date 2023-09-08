/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:08:51 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/07 11:41:29 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	If s1 is in the right of s2
	1. If yes then copy from back to front
	2. If not then copy from front to back
	(Copy total n bytes)
	No undefined behavior would be occurred.
*/

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (s1 == s2)
		return (s1);
	s = (const unsigned char *)s2;
	d = (unsigned char *)s1;
	if (d > s)
	{
		d += n - 1;
		s += n - 1;
		while (n--)
			*d-- = *s--;
	}
	else
		ft_memcpy(s1, s2, n);
	return (s1);
}
