/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:39:45 by snetrasi          #+#    #+#             */
/*   Updated: 2023/08/27 16:20:09 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	copy only size - 1 but if cpy all src already stop
	special case: size = 0
		cpy would not occur and no null-terminated
	return length of src
*/

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i + 1 < size && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	if (size > 0)
		*(dest + i) = '\0';
	return (ft_strlen(src));
}
