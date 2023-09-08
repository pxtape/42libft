/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 12:04:40 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/09 00:12:31 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Computes the length of the string s.
*/

size_t	ft_strlen(char const *str)
{
	char const	*c;

	c = str;
	while (*str)
		str++;
	return (str - c);
}
