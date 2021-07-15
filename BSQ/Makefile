# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dsalgado <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/13 22:08:36 by dsalgado          #+#    #+#              #
#    Updated: 2021/07/14 18:44:17 by acastril         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=  main.c algoritmia.c comprobacion.c imprimir.c rellena.c

OBJS	= ${SRCS:.c=.o}

NAME	= bsq

CC		= cc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:		${NAME}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re: 		fclean all

.PHONY:		all clean fclean re

