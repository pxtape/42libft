/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:32:36 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/03 10:02:38 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *c)
{
	int	value;
	int	sign;

	value = 0;
	sign = 1;
	while (ft_isspace(*c))
		c++;
	if (*c == '-' || *c == '+')
	{
		if (*c == '-')
			sign = -1;
		c++;
	}
	while (ft_isdigit(*c))
	{
		value = value * 10 + sign * (*c - '0');
		c++;
	}
	return (value);
}

/*
int	main(int ac, char **av)
{
	int	i;

	if (ac > 1)
	{
	i = 0;
	while (++i < ac)
		printf("%d. [real = %d] -- [ft = %d]\n",i , atoi(av[i]), ft_atoi(av[i]));
	}
	return (0);
}
*/