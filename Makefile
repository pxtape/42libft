SRCS		= $(wildcard *.c)
OBJS		= ${SRCS:.c=.o}
HEAD		= .
NAME		= libft.a
CC			= cc
CFLAGS		= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${HEAD}

all:		${NAME}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

test: test/test.out

test/test.out:		all
			${CC} ${CFLAGS} -o $@ test/main.c -I ${HEAD} libft.a

.PHONY:		all clean fclean re