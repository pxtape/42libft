/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:40:57 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/07 12:10:32 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Locates the first occurence of c (converted to a char).
 *	This can also find the null-terminated as well (when c is zero).
*/

char	*ft_strchr(const char *str, int c)
{
	char	k;

	k = (char)c;
	while (*str)
	{
		if (*str == k)
			return ((char *)str);
		str++;
	}
	if (*str == k)
		return ((char *)str);
	return (NULL);
}
