/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:06:56 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/09 00:27:32 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Trim character (in set) from the begining and the end
 * Allocated the copy of string that have been trimmed already.
 * 
 * special case: trim all
 * -> stop = end of original str
 * -> start = stop + 1
 * -> new len = 0
 * -> only null terminated in str
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	size_t	new_len;
	size_t	start;
	size_t	stop;

	start = 0;
	stop = ft_strlen(s1) - 1;
	if (*s1 && *set)
	{
		while (s1[start] != '\0' && ft_strchr(set, s1[start]))
			start++;
		while (stop > start && ft_strchr(set, s1[stop]))
			stop--;
	}
	new_len = stop - start + 1;
	s = (char *)malloc(new_len + 1);
	if (!s)
		return (NULL);
	ft_strlcpy(s, s1 + start, new_len + 1);
	return (s);
}
