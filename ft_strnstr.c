/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:39:56 by snetrasi          #+#    #+#             */
/*   Updated: 2023/08/27 14:55:43 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *sub, size_t size)
{
	size_t	str_len;
	size_t	sub_len;
	size_t	i;

	if (!str || !sub)
		return (NULL);
	str_len = ft_strlen(str);
	sub_len = ft_strlen(sub);
	i = 0;
	while (i < str_len - size + 1 && i < size - 1)
	{
		if (!ft_strncmp(str + i, sub, sub_len))
			return ((char *)(str + i));
		i++;
	}
	return (NULL);
}
