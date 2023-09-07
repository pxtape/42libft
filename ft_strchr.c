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

	find int c (change to char first) in str

	if found return that pointer
	if not found return NULL

	special case for c == 0 or NULL :
		adding at the end of string
		if the end is the same as c (NULL)
			return the pointer
		otherwise
			return NULL

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

/*
int	main(void)
{
	char haystack[] = "Name";
	char needle = 'm';

	printf("%ld\n", ft_strchr(haystack, needle) - haystack);
	return (0);
}
*/