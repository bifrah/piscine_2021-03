/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naben-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 11:33:33 by naben-za          #+#    #+#             */
/*   Updated: 2021/03/21 14:14:03 by naben-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "lib_sky.h"

int		**ft_fill_boards(int **board, int size)
{
	int i;
	int j;

	i = -1;
	if(!(board = malloc(sizeof(int) * size + 1)))
		return (0);
	while(++i < size)
	{
		j = -1;
		if(!(board[i] = malloc(sizeof(int) * size + 1)))
			return (0);
		while (++j < size)
			board[i][j] = 0;
	}
	return (board);
}

int		**ft_fill_clue_tabs(int **clues, char *values, int size)
{
	int i;
	int j;

	i = -1;
	if (!(clues = malloc(sizeof(int) * size + 1)))
		return (0);
	while (++i < size)
	{
		j = -1;
		if (!(clues[i] = malloc(sizeof(int) * size + 1)))
			return (0);
		while (++j < size)
		{
			clues[i][j] = *values - 48;
			*values += 2;
			values += 2;
		}
	}
	return (clues);
}

void	ft_free_malloc(int **board, int **clues, int size)
{
	int i;

	i = -1;
	while (++i < 4)
		free(clues[i]);
	i = -1;
	while (++i < size)
		free(board[i]);
	free(clues);
	free(board);
}
