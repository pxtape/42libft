/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:46:44 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/03 10:29:35 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*
int	main(void)
{
	int	i;

	i = 256;
	if ((isdigit(i) && ft_isdigit(i)) ||
		(!isdigit(i) && !ft_isdigit(i)))
		printf("\033[0;32m""OK\n""\033[0m");
	else
		printf("\033[0;31m""KO\n""\033[0m");	
	return (0);
}
*/