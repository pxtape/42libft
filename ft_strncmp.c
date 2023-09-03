/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:39:54 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/03 13:39:33 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (!*(s1 + i) || !*(s2 + i)
			|| ft_memcmp(s1 + i, s2 + i, 1))
			return (ft_memcmp(s1 + i, s2 + i, 1));
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char s1[] = "AAAAA";
	char s2[] = "AAAZA";

	printf("%d\n", strncmp(s1, s2, 5));
	return (0);
}
*/
