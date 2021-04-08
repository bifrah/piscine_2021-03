# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bifrah <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/29 12:56:42 by bifrah            #+#    #+#              #
#    Updated: 2021/03/29 12:56:45 by bifrah           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -Wall -Wextra -Werror ft_putchar.c ft_putstr.c ft_strlen.c ft_swap.c ft_strcmp.c -c
ar -rc libft.a ft_putchar.o  ft_putstr.o ft_strlen.o ft_swap.o ft_strcmp.o
rm -rf *.o
