/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naben-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 12:39:25 by naben-za          #+#    #+#             */
/*   Updated: 2021/03/21 18:11:44 by naben-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "lib_sky.h"

int main(int ac, char **av)
{
	int **board;
	int **clues;

	board = NULL;
	clues = NULL;
	if (ac == 2)
	{
		if ((check_input(av[1]) == 0) || (!(clues = ft_fill_clue_tabs(clues, av[1], 4)))
		|| (!(board = ft_fill_boards(board, 4))) || (!check_clues(clues) || !check_clues2(clues)))
		{
			ft_putstr("Error\n");
			return (0);
		}
		board = start_solve(board, clues, 4);
		board = next_solve(board, clues, 4);
		board = next2_solve(board, clues, 4);
		print_board(board, 4);
		ft_putchar('\n');
		ft_free_malloc(board, clues, 4);
	}
	else
		ft_putstr("Error\n");
	return (0);
}
