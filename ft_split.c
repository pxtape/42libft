/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:40:57 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/08 23:57:24 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Returns an array of strings obtained by splitting 's' 
 *	using the character 'c' as a delimiter.
 *	The array must end with NULL pointer.
 *
 *	1. Starts with counting the number of the splitted string.
 *	2. Allocated the array with the size, including null-terminated.
 *	3. Find each splitted string, allocated each string and put it into the array.
 *	
 *	If something is wrong, free all splitted strings
 *	that have been allocated and also with array.
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
	arr[*p_size] = NULL;
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
