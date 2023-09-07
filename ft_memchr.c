/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 12:01:53 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/07 11:54:42 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t size)
{
	unsigned char	*p;
	int				k;

	p = (unsigned char *)s;
	k = (unsigned char)c;
	while (size--)
	{
		if (*p == k)
			return ((void *)p);
		p++;
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