/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:06:24 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/03 13:39:36 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*



*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_s;
	size_t	s_len;
	size_t	i;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	new_s = (char *)malloc(s_len + 1);
	if (!new_s)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		new_s[i] = f(i, s[i]);
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}

/*
static void adding(unsigned int i, char *s)
{
	*s += i;
}

int main(void)
{
	char A[] = "AAAAAAAAAAAAAAAAAAAAAAAAAA";
	char *B;

	B = ft_strmapi(A, adding);
	printf("A: %s\nB: %s\n",A , B);
	return (0);
}
*/