/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:41:35 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/08 23:58:36 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Compare the most n bytes between s1 and s2.
 *	Return the difference between the first two differing bytes. 
 *	(Treated as unsigned char values)
 *
 *	If s1 point to the same address as s2,
 *	then both should be identical (NO NEED TO CHECK).
 *	Find the most n bytes, if differing bytes is found
 *	then return the different of both.
 *	If the most n bytes, nothing is different then return zero.
 *	If n is zero, then both s1 and s2 is always identical.
 */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	if (p1 == p2)
		return (0);
	while (n--)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}
