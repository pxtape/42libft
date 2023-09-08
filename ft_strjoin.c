/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:06:46 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/09 00:03:40 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * 	Return a new allocated string, which is 
 *	the result of the concatenation of s1 and s2.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	s = (char *)malloc(s1_len + s2_len + 1);
	if (!s)
		return (NULL);
	ft_strlcpy(s, s1, s1_len + 1);
	ft_strlcpy(s + s1_len, s2, s2_len + 1);
	return (s);
}
