/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 12:01:53 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/07 11:54:42 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Locate the first occurence of c (compare by unsigned char) in string s.	
 */

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	k;

	p = (unsigned char *)s;
	k = (unsigned char)c;
	while (n--)
	{
		if (*p == k)
			return ((void *)p);
		p++;
	}
	return (NULL);
}
