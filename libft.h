/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:49:11 by snetrasi          #+#    #+#             */
/*   Updated: 2023/08/27 15:04:52 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H
# define BUFFER_SIZE 1024
# include <stdlib.h>

/* 
	string
*/

int		ft_isspace(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(char const *c);
int		ft_islower(int c);
int		ft_isupper(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strnstr(const char *str, const char *sub, size_t size);
int		ft_strncmp(const char *s1, const char *s2, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
char	*ft_strdup(char *src);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char 	*ft_strtrim(char const *s1, char const *set);
int		ft_atoi(const char *c);

/* 
	memory
*/

void	ft_bzero(void *str, size_t size);
void	*ft_memset(void *str, int c, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t size);
void	*ft_memmove(void *dest, const void *src, size_t size);
int		ft_memcmp(const void *s1, const void *s2, size_t size);
void	*ft_memchr(const void *s, int c, size_t size);
void	*ft_calloc(size_t nitems, size_t size);

#endif