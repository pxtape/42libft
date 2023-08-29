/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:39:40 by snetrasi          #+#    #+#             */
/*   Updated: 2023/08/27 16:35:13 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	find the src len and dest len
	
	start at in dest index
	cpy to size - 1 index

	handle when size < 0

*/

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dest_len;
	size_t	i;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	i = dest_len;
	if (dest_len < size - 1 && size > 0)
	{
		while (i < size - 1 && *(src + i - dest_len))
		{
			*(dest + i) = *(src + i - dest_len);
			i++;
		}
		*(dest + i) = '\0';
	}
	if (dest_len >= size)
		dest_len = size;
	return (dest_len + src_len);
}
