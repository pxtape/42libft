/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:40:02 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/09 00:38:56 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * If c is a lowercase character
 * , then return uppercase one.
 * Otherwise return itself.
*/

int	ft_tolower(int c)
{
	if (ft_isupper(c))
		c += 32;
	return (c);
}
