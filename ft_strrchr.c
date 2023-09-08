/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:39:59 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/09 00:25:39 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * The same concept with strchr but reverse
 * Find the last occurence of int c
*/

char	*ft_strrchr(const char *str, int c)
{
	char	*last_pos;
	char	k;

	k = (char)c;
	last_pos = NULL;
	while (*str)
	{
		if (*str == k)
			last_pos = (char *)str;
		str++;
	}
	if (*str == k)
		return ((char *)str);
	return (last_pos);
}
