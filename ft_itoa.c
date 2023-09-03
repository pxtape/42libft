/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:40:57 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/03 10:33:14 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	create buffer with max size 12 (11 for longest int and 1 for null terminated)

	do null terminated
	size show positive and negative
	if n is negative then sign = -1 otherwise 1
	start from back to front
	give the number of each digit to buffer (small to big)
	finish when n == 0
	if negative add minus sign
	cpy this buffer to new malloc str by strdup and return it'

*/

char	*ft_itoa(int n)
{
	char	buffer[12];
	char	size;
	int		i;

	buffer[11] = '\0';
	size = 1;
	if (n < 0)
		size = -1;
	i = 10;
	while (i > 0)
	{
		if (n >= 0)
			buffer[i--] = (n % 10) + '0';
		else
			buffer[i--] = -(n % 10) + '0';
		n /= 10;
		if (n == 0)
			break ;
	}
	if (size == -1)
		buffer[i--] = '-';
	return (ft_strdup(&buffer[i + 1]));
}

/*
int	main(void)
{
	char *s;

	s = ft_itoa(0);
	printf("%s\n", s);
	free(s);
}
*/