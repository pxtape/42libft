/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 12:04:40 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/07 12:00:53 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char const *str)
{
	char const	*c;

	c = str;
	while (*str)
		str++;
	return (str - c);
}

/*
int	main(void)
{
	char s[] = "";

	printf("%zu\n", ft_strlen(s));
	return (0);
}
*/