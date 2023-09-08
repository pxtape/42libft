/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:06:37 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/09 00:36:57 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Get the allocated substring start from start index
 * If start is far than s_len, get empty string.
 * If len greater than size of substring,
 * give len = size to allocate only necessary bytes.
 * Otherwise copy only len characters.
*/

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	size;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	size = s_len - start;
	if (len > size)
		len = size;
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}
