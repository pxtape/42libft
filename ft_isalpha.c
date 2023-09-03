/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:42:36 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/03 10:29:16 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (ft_islower(c) || ft_isupper(c))
		return (1);
	return (0);
}

/*
int	main(void)
{
	int	i;

	i = 256;
	if ((isalpha(i) && ft_isalpha(i)) ||
		(!isalpha(i) && !ft_isalpha(i)))
		printf("\033[0;32m""OK\n""\033[0m");
	else
		printf("\033[0;31m""KO\n""\033[0m");	
	return (0);
}
*/