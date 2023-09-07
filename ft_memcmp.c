/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:41:35 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/07 11:36:56 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t size)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	if (p1 == p2)
		return (0);
	while (size--)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}

/*
int	main(void)
{
	char s1[] = {0, 1, 2, 3};
	char s2[] = {0, 1, 2, 3};
	char s3[] = {1, 0, 120, 0};
	char s4[] = {1, 0, 30, 0};

	printf("%d\n",!ft_memcmp(s1, s2, 4));
	printf("%d\n",!ft_memcmp(s1, s2, 0));
	printf("%d\n",ft_memcmp(s1, s3, 4) < 0);
	printf("%d\n",ft_memcmp(s3, s4, 4) > 0);
	return (0);
}
*/