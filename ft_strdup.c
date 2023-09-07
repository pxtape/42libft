/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:40:52 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/07 12:13:14 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*newstr;
	size_t	size;

	size = ft_strlen(src);
	newstr = (char *)malloc(size + 1);
	if (newstr == NULL)
		return (NULL);
	ft_strlcpy(newstr, src, size + 1);
	return (newstr);
}

/*
int	main(void)
{
	char	*name = ft_strdup(NULL);

	printf("%s\n", name);
	free(name);
	return (0);
}
*/