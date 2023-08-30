/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:06:37 by snetrasi          #+#    #+#             */
/*   Updated: 2023/08/30 19:06:38 by snetrasi         ###   ########.fr       */
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

	str = (char *)malloc(len);
	if (str == NULL)
		return (NULL);
	if (start <= ft_strlen(s))
		ft_strlcpy(str, s + start, len);
	else
		ft_strlcpy(str, "\0", len);
	return (str);
}
