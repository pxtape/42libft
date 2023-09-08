/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:40:57 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/09 00:18:38 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * 	Converts an integer value to a dynamically allocated string.
 *	Return an allocated string representing the integer value.
 *
 *	1. Buffer with size of 11 characters (10 characters for
 *	digits and 1 character for negative sign).
 *	2. if n is negative, give sign = -1 otherwise sign = 1.
 *	3. To obtain the final digit, calculate the remainder by n % 10 
 *	(multiply by -1, if n is negative).
 *	4. To get the next digit, n /= 10 
 *	5. Put each digit to an appropriate position.
 *	6. allocate new string and copy from buffer to the new one.
*/

static char	*create_number(char *buffer, int size)
{
	char	*a;

	a = (char *)malloc(sizeof(char) * size);
	if (!a)
		return (NULL);
	ft_strlcpy(a, buffer, size);
	return (a);
}

char	*ft_itoa(int n)
{
	char	buffer[11];
	char	size;
	int		i;

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
	return (create_number(buffer + i + 1, 11 - i));
}
