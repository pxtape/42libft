/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 10:55:49 by snetrasi          #+#    #+#             */
/*   Updated: 2023/09/03 13:29:03 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Output the character 'c' to the given file descriptor.
 */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
