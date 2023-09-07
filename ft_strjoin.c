/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:06:46 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/07 13:59:13 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	join two strings to be new longer string

	if s1 is null or s2 is null then 
		return null
	find total len of new str by len(s1) + len(s2)
	malloc new str (total len + 1), 1 for null-terminated
	cpy s1 to newstr
	cat s2 to newstr
	return newstr

*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	s1_len;
	size_t	s2_len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	s = (char *)malloc(s1_len + s2_len + 1);
	if (!s)
		return (NULL);
	ft_strlcpy(s, s1, s1_len + 1);
	ft_strlcpy(s + s1_len, s2, s2_len + 1);
	return (s);
}

/*
int	main(void)
{
	char s1[] = "Hello";
	char s2[] = ", World!";
	char *s3 = ft_strjoin(s1, s2);
	printf("%s\n", s3);
	free(s3);
	return (0);
}
*/