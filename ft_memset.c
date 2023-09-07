/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 13:21:01 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/07 11:49:59 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t size)
{
	unsigned char	*p;
	unsigned char	k;

	p = (unsigned char *)str;
	k = (unsigned char)c;
	while (size--)
	{
		*p = k;
		p++;
	}
	return (str);
}

// #include <strings.h>
// int	main(void)
// {
// 	// ft_memset(NULL, 0, 10);

// 	char tab[20];
// 	char tab2[20];
// 	memset(tab, 'A', 20);
// 	memset(tab2, 'A', 20);
// 	ft_memset(tab, 'B', 3);
// 	memset(tab2, 'B', 3);
// 	if (!memcmp(tab, tab2 ,20))
// 		printf("\033[0;32m""OK\n""\033[0m");
// 	else
// 		printf("\033[0;31m""KO\n""\033[0m");
// 	return (0);
// }