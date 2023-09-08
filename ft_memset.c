/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 13:21:01 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/07 11:49:59 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Write n bytes of value c (converted to an unsigned char)
 *	to the string s.
 */

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	k;

	p = (unsigned char *)str;
	k = (unsigned char)c;
	while (n--)
		*p++ = k;
	return (str);
}
