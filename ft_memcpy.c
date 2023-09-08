/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:50:11 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/08 23:56:26 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Copies n bytes from memory area s2 to memory area s1 
 *	(Don't care overlap, behavior is undefined).
 *
 *	Copy from left to right througt n bytes,
 *	but if s1 is the same as s2 then nothing need to copy.
 *	This will broken and make undefined behavior
 *	when s1 is in the right of s2 and overlapped.
 */

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	if (s2 == s1)
		return (s1);
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (n--)
		*p1++ = *p2++;
	return (s1);
}
