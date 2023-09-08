/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:39:54 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/09 00:18:57 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Compare str the most n characters with unsigned char
 * If there are differing characters, then returns
 * different of both.
 */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*c1;
	unsigned char	*c2;

	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (!*(c1 + i) || !*(c2 + i)
			|| *(c1 + i) != *(c2 + i))
			return (*(c1 + i) - *(c2 + i));
		i++;
	}
	return (0);
}
