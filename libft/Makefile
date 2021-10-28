NAME	=	libft.a

SRCS	= 	$(wildcard srcs/*.c)

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

FO		=	${SRCS:.c=.o}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I includes/

all:		${NAME}

${NAME}:	${FO}
			ar -vcrs ${NAME} ${FO}

clean:
			rm -f ${FO}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		clean fclean re
