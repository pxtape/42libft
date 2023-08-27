/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:39:59 by snetrasi          #+#    #+#             */
/*   Updated: 2023/08/27 16:07:17 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*last_pos;

	last_pos = NULL;
	while (*str)
	{
		if (*str == (char)c)
			last_pos = (char *)str;
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	return (last_pos);
}
