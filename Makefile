# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/09 01:01:13 by snetrasi          #+#    #+#              #
#    Updated: 2023/09/09 01:02:21 by snetrasi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# library name
NAME		=	libft.a

#c file
SRCS		=	ft_atoi.c \
				ft_bzero.c \
				ft_calloc.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_islower.c \
				ft_isprint.c \
				ft_isspace.c \
				ft_isupper.c \
				ft_itoa.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c \
				ft_putchar_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_putstr_fd.c \
				ft_split.c \
				ft_strchr.c \
				ft_strdup.c \
				ft_striteri.c \
				ft_strjoin.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strlen.c \
				ft_strmapi.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_strtrim.c \
				ft_substr.c \
				ft_tolower.c \
				ft_toupper.c

# c file of bonus part
B_SRCS		=	ft_lstadd_back_bonus.c \
				ft_lstadd_front_bonus.c \
				ft_lstlast_bonus.c \
				ft_lstnew_bonus.c \
				ft_lstsize_bonus.c \
				ft_lstclear_bonus.c \
				ft_lstiter_bonus.c \
				ft_lstdelone_bonus.c \
				ft_lstmap_bonus.c

#object
OBJS		= ${SRCS:.c=.o}
B_OBJS		= ${B_SRCS:.c=.o}

#cc and c flags
CC			= cc
CFLAGS		= -Wall -Wextra -Werror -I.

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:		$(NAME)

$(NAME):	${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

bonus:		${B_OBJS}
			ar rc ${NAME} ${B_OBJS}
			ranlib ${NAME}

clean:
			rm -f ${OBJS} ${B_OBJS}

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all bonus clean fclean re