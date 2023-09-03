/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:52:00 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/03 10:29:17 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
int	main(void)
{
	int	i;

	i = 256;
	if ((isascii(i) && ft_isascii(i)) ||
		(!isascii(i) && !ft_isascii(i)))
		printf("\033[0;32m""OK\n""\033[0m");
	else
		printf("\033[0;31m""KO\n""\033[0m");	
	return (0);
}
*/