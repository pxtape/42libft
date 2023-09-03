/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 11:05:29 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/03 13:28:59 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	buffer[12];
	char	size;
	int		i;

	buffer[11] = '\0';
	size = 1;
	if (n < 0)
		size = -1;
	i = 10;
	while (i > 0)
	{
		if (n >= 0)
			buffer[i--] = (n % 10) + '0';
		else
			buffer[i--] = -(n % 10) + '0';
		n /= 10;
		if (n == 0)
			break ;
	}
	if (size == -1)
		buffer[i--] = '-';
	ft_putstr_fd(&buffer[i + 1], fd);
}

/*
int	main(void)
{
	ft_putnbr_fd("+200abc", 1);
	ft_putendl_fd("", 1);
	return (0);
}
*/