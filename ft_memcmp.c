/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:41:35 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/03 11:51:10 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t size)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	if (p1 == p2)
		return (0);
	i = 0;
	while (i < size)
	{
		if (*(p1 + i) != *(p2 + i))
			return (*(p1 + i) - *(p2 + i));
		i++;
	}
	return (0);
}

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
}