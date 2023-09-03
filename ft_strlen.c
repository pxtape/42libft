/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 12:04:40 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/03 13:28:32 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char const *c)
{
	size_t	len;

	len = 0;
	while (*(c + len) != '\0')
		len++;
	return (len);
}

/*
int	main(void)
{
	char s[] = "";

	printf("%zu\n", ft_strlen(s));
	return (0);
}
*/