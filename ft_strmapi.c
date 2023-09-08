/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:06:24 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/09 00:13:22 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Applies the function ’f’ to each character of the
 * string ’s’, and passing its index as first argument
 * to create a new string
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_s;
	size_t	s_len;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	new_s = (char *)malloc(s_len + 1);
	if (!new_s)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		if (f)
			new_s[i] = f(i, s[i]);
		else
			new_s[i] = s[i];
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
