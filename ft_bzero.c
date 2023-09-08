/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:42:53 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/08 23:54:17 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	writes n zeroed bytes to the string s.
 *	If n is zero, nothing to do. 
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
