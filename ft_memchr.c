/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 12:01:53 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/03 13:29:20 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t size)
{
	unsigned char	*p;
	int				k;
	size_t			i;

	p = (unsigned char *)s;
	k = (unsigned char)c;
	i = 0;
	while (i < size)
	{
		if (*(p + i) == k)
			return ((void *)(p + i));
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	char s[] = {0,1,2,3,4,5,6};
	
	printf("%ld\n", ft_memchr(s, 6, 7) - (void *)s);
	printf("%ld\n", ft_memchr(s, 0, 7) - (void *)s);
	return (0);
}
*/