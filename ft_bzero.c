/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:42:53 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/03 10:13:59 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t size)
{
	ft_memset(str, 0, size);
}

/*
#include <strings.h>
int	main(void)
{
	char tab[20];
	char tab2[20];
	memset(tab, 'A', 20);
	memset(tab2, 'A', 20);
	ft_bzero(tab, 3);
	bzero(tab2, 3);
	if (!memcmp(tab, tab2 ,20))
		printf("\033[0;32m""OK\n""\033[0m");
	else
		printf("\033[0;31m""KO\n""\033[0m");
}
*/