/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:50:11 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/07 11:33:06 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	if (src == dest)
		return (dest);
	p1 = (unsigned char *)dest;
	p2 = (unsigned char *)src;
	while (n--)
	{
		*p1 = *p2;
		p1++;
		p2++;
	}
	return (dest);
}

/*
int	main(void)
{
	char dest[20];

	memset(dest, 'A', 20);
	ft_memcpy(dest, "coucou", 0);
	write(1, dest, 20);
	write(1, "\n", 1);
	return (0);
}
*/