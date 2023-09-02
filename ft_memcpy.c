/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:50:11 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/02 15:32:28 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	if (src == dest)
		return (dest);
	p1 = (unsigned char *)dest;
	p2 = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		*(p1 + i) = *(p2 + i);
		i++;
	}
	return (dest);
}
