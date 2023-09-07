/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 10:50:16 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/07 14:01:11 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (*s)
		f(i++, s++);
}

/*
static void adding(unsigned int i, char *s)
{
	*s += i;
}

int main(void)
{
	char A[] = "AAAAAAAAAAAAAAAAAAAAAAAAAA";

	ft_striteri(A, adding);
	printf("%s\n", A);
	return (0);
}
*/