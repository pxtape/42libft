/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:39:59 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/03 13:39:31 by snetrasi         ###   ########.fr       */
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

/*
int	main(void)
{
	char haystack[] = "mame";
	char needle = 'm';

	printf("%s\n", ft_strrchr(haystack, needle));
	return (0);
}
*/