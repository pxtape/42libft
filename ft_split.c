/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:40:57 by snetrasi          #+#    #+#             */
/*   Updated: 2023/08/30 22:21:19 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	start and stop to get the range for each str.
	(exclude stop)
	start and stop = beginning of s.
	while start != null
		if c at stop or stop is null, calculate the length (stop - start).
			if length >= 1, malloc new str (length + 1) and strlcpy to it.
			if stop != null, move start and stop to stop + 1
			else start = stop
		if c not at stop ,move stop more one step.
	return array

*/

static size_t	count_split(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			i++;
		s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	j;
	size_t	size;

	arr = (char **)malloc((count_split(s, c) + 1) * sizeof(char *));
	size = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			j = 0;
			while (!(*(s + j) != c 
					&& (*(s + j + 1) == c || *(s + j + 1) == '\0')))
				j++;
			arr[size] = (char *)malloc(j + 2);
			ft_strlcpy(arr[size++], s, j + 2);
			s += j + 1;
		}
	}
	arr[size] = NULL;
	return (arr);
}

// #include <stdio.h>

// int	main(int ac, char**av)
// {
// 	char	**set;
// 	int	i;

// 	i = 0;
// 	if (ac == 2)
// 	{
// 		set = ft_split(av[1], ' ');
// 		while (set[i] != NULL)
// 		{
// 			printf("[i]  %s  [f]\n", set[i]);
// 			free(set[i++]);
// 		}
// 		free(set);
// 	}
// }