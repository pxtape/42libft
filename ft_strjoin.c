/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:06:46 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/02 14:42:05 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	join two strings to be new longer string

	if s1 is null or s2 is null then 
		return null
	find total len of new str by len(s1) + len(s2)
	malloc new str (total len + 1), 1 for null-terminated
	cpy s1 to newstr
	cat s2 to newstr
	return newstr

*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	s_len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s_len = ft_strlen(s1) + ft_strlen(s2);
	s = (char *)malloc(s_len + 1);
	if (!s)
		return (NULL);
	ft_strlcpy(s, s1, s_len + 1);
	ft_strlcat(s, s2, s_len + 1);
	return (s);
}
