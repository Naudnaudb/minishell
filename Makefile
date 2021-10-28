NAME	=	minishell

SRCS	=	srcs/builtins/builtins_cd.c \
		srcs/builtins/builtins_export.c \
		srcs/builtins/builtins_export_utils.c \
		srcs/builtins/builtins_utils.c \
		srcs/builtins/builtins_unset_env_pwd.c \
		srcs/builtins/exec_child_process.c \
		srcs/builtins/error_handling.c \
		srcs/builtins/pipes.c \
		srcs/builtins/redirections.c \
		srcs/builtins/env_vars_utils.c \
		srcs/builtins/execution.c \
		srcs/builtins/builtins_echo_exit.c \
		srcs/parser/command.c \
		srcs/parser/main.c \
		srcs/parser/utils_syntax.c \
		srcs/parser/filling_token_struct.c \
		srcs/parser/list_struct.c \
		srcs/parser/utils_variable.c \
		srcs/parser/help_functions.c \
		srcs/parser/split_args_and_redirects.c \
		srcs/parser/check_syntax_errors.c \
		srcs/parser/parser.c

LIBFT	=	libft/

SRCDIR	=	srcs/

INCL	=	includes/

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

OBJS	=	${SRCS:.c=.o}

.c.o	:
			${CC} ${CFLAGS} -I ${LIBFT}${INCL} -I ${INCL} -c $< -o ${<:.c=.o}

all		:	${NAME}

${NAME}	:	${OBJS}
			make -C ${LIBFT}
			${CC} -lreadline -o ${NAME} ${OBJS} ${LIBFT}libft.a

clean	:
			find . -type f -name "*.o" -delete

fclean	:	clean
			find . -type f -name "*.a" -delete
			rm -rf ${NAME}

re		:	fclean all

.PHONY	:	re clean fclean