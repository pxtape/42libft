/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:06:37 by snetrasi          #+#    #+#             */
/*   Updated: 2023/08/31 12:22:34 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	start with allocate memory of len size

	if malloc fail (no more space for malloc or len not allow (negative))
		return NULL

	if start index if smaller than to index of null terminate (start < len(s))
	otherwise be empty null-terminated string
		return str

	special case: len = 0
		strlcpy handle it.
*/

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	size;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (len > size)
		len = size;
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}
