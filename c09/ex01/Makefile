# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bifrah <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/29 12:52:19 by bifrah            #+#    #+#              #
#    Updated: 2021/03/29 12:53:40 by bifrah           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/ft_putchar.c \
       srcs/ft_putstr.c \
       srcs/ft_strcmp.c \
       srcs/ft_strlen.c \
       srcs/ft_swap.c \

CC = gcc

FLAGS = -Wall -Wextra -Werror

AR = ar -rc

OBJ = 		${SRCS:.c=.o}

.c.o:		${SRCS}
			${CC} ${FLAGS} -I./includes -h $< -o ${<:.c=.o}

.PHONY: 	all clean fclean re

all: 		${NAME}

${NAME}: 	${OBJ}
			${AR} ${NAME} ${OBJ}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all
