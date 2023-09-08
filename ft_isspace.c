/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:35:59 by snetrasi          #+#    #+#             */
/*   Updated: 2023/08/27 14:42:07 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	checks for white-space characters,
 *	including '\f', '\n', '\t', '\v' and space.
 */

int	ft_isspace(int c)
{
	if (c == 32 || c == 9
		|| c == 10 || c == 13
		|| c == 12 || c == 11)
		return (1);
	return (0);
}
