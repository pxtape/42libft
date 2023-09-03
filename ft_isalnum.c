/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:47:48 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/03 10:28:33 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

/*
int	main(void)
{
	int	i;

	i = 256;
	if ((isalnum(i) && ft_isalnum(i)) ||
		(!isalnum(i) && !ft_isalnum(i)))
		printf("\033[0;32m""OK\n""\033[0m");
	else
		printf("\033[0;31m""KO\n""\033[0m");	
	return (0);
}
*/