/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:40:57 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/03 14:09:52 by snetrasi         ###   ########.fr       */
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

static void	clear_arr(char **arr)
{
	size_t	i;

	i = 0;
	while (arr[i] != NULL)
		free(arr[i++]);
	free(arr);
}

static char	*get_split(char const *s, char c, char **arr, size_t *p_size)
{
	char	*split;
	size_t	j;

	j = 0;
	while (!(*(s + j) != c && (*(s + j + 1) == c
				|| *(s + j + 1) == '\0')))
		j++;
	split = (char *)malloc(j + 2);
	if (!split)
	{
		clear_arr(arr);
		return (NULL);
	}
	ft_strlcpy(split, s, j + 2);
	arr[*p_size] = split;
	*p_size += 1;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	char	*split;
	size_t	size;

	arr = (char **)malloc((count_split(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	size = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			split = get_split(s, c, arr, &size);
			if (!split)
				return (NULL);
			s += ft_strlen(split);
		}
	}
	arr[size] = NULL;
	return (arr);
}

/*
int	main(int ac, char**av)
{
	char	**set;
	int	i;

	i = 0;
	if (ac == 3)
	{
		set = ft_split(av[1], av[2][0]);
		while (set[i] != NULL)
		{
			printf("[i]--%s--[f]\n", set[i]);
			free(set[i++]);
		}
		free(set);
	}
	return (0);
}
*/