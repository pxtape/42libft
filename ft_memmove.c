/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:08:51 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/02 15:33:09 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define BUFFER_SIZE 1024

/*
	check overlap dest and src (size of n)
	1. overlap and dest in the right of src (copy from back to front)
	2. otherwise do the same memcpy (copy from front to back)
*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	i = 0;
	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	if (s == d)
		return (d);
	if (d > s && d <= s + n - 1)
	{
		while (i < n)
		{
			*(d + n - 1 - i) = *(s + n - 1 - i);
			i++;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
