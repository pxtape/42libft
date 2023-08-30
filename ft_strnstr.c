/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:39:56 by snetrasi          #+#    #+#             */
/*   Updated: 2023/08/30 19:05:30 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
			if (ft_memcmp(s1 + i + j, s2 + j, 1) == 0)
				j++;
			else
				break ;
		}
		if (*(s2 + j) == '\0')
			return ((char *)s1 + i);
		i++;
	}
	return (NULL);
}
