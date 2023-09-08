/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:39:56 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/09 00:24:11 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Find s2 in s1 in the first portion of size characters.
 * 
 * If s2 is found, then returns a pointer to
 * address of first character of s2 in s1
 * If not found, returns NULL
 * But if s2 is empty string, then return s1.
*/

char	*ft_strnstr(const char *s1, const char *s2, size_t size)
{
	size_t	i;
	size_t	j;

	if (!*s2)
		return ((char *)s1);
	i = 0;
	while (*(s1 + i) && i < size)
	{
		j = 0;
		while (*(s1 + i + j) && *(s2 + j) && i + j < size)
		{
			if (*(s1 + i + j) == *(s2 + j))
				j++;
			else
				break ;
		}
		if (*(s2 + j) == '\0')
			return ((char *)(s1 + i));
		i++;
	}
	return (NULL);
}
