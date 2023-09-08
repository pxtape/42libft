/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:30:20 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/09 00:39:41 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * If c is a uppercase character
 * , then return lowercase one.
 * Otherwise return itself.
*/

int	ft_toupper(int c)
{
	if (ft_islower(c))
		c -= 32;
	return (c);
}
