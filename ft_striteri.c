/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 10:50:16 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/03 13:47:09 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	s_len;
	size_t	i;

	if (s == NULL)
		return ;
	s_len = ft_strlen(s);
	i = 0;
	while (i < s_len)
	{
		f(i, s + i);
		i++;
	}
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