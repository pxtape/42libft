/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:39:40 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/09 00:09:54 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Append the null-terminated src to the end of dest.
 * Guarantee to NULL-terminate the result
 * within buffer size
 * For strlcat() both src and dst must be NULL-terminated.
 * Return the initial length of dst 
 * plus the length of src
 */

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dest_len;
	size_t	i;

	if (!size)
		return (ft_strlen(src));
	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	i = dest_len;
	if (dest_len < size - 1)
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
