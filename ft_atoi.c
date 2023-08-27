/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:32:36 by snetrasi          #+#    #+#             */
/*   Updated: 2023/08/27 14:41:00 by snetrasi         ###   ########.fr       */
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
	if (*c == '-')
	{
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
