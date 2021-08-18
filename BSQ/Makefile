
SRCS	=  main.c algoritmia.c comprobacion.c check_errors.c imprimir.c rellena.c ft_atoi.c ft_getfile.c helpers.c 

OBJS	= ${SRCS:.c=.o}

NAME	= bsq

CC		= cc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

all:		${NAME}

run:		./${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re: 		fclean all

.PHONY:		all clean fclean re