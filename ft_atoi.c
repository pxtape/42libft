/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:32:36 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/09 00:06:19 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Convert initial portion of str to be integer (without overflow protection)
 * 1. Skip all initial whitespace in str
 * 2. Get positive and negative sign
 * 3. get the value all next digits 
 * (Everything behind numbers don't need to be care)
 *
 * Additional for real function [Doesn't Implement]: 
 * 	Overflow to size of long long will return (-1)
*/

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
