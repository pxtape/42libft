/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:40:57 by snetrasi          #+#    #+#             */
/*   Updated: 2023/08/27 16:06:00 by snetrasi         ###   ########.fr       */
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

static size_t	ft_count_split(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	size_arr;
	size_t	start;
	size_t	stop;
	char	**str_arr;

	size_arr = ft_count_split(s, c);
	str_arr = (char **)malloc(size_arr + 1);
	start = 0;
	stop = 0;
	i = 0;
	while (i < size_arr)
	{
		if (s[stop] == c || s[stop] == '\0')
		{
			if (stop - start >= 1)
			{
				str_arr[i] = (char *)malloc(stop - start + 1);
				ft_strlcpy(str_arr[i++], s + start, stop - start + 1);
			}
			if (s[stop] != '\0')
				stop++;
			start = stop;
		}
		else
			stop++;
	}
	str_arr[i] = NULL;
	return (str_arr);
}

static size_t	ft_count_split(char const *s, char c)
{
	size_t	start;
	size_t	stop;
	size_t	count;

	count = 0;
	start = 0;
	stop = 0;
	while (s[start] != '\0')
	{
		if (s[stop] == c || s[stop] == '\0')
		{
			if (stop - start >= 1)
				count++;
			if (s[stop] != '\0')
				stop++;
			start = stop;
		}
		else
			stop++;
	}
	return (count);
}
