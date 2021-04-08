/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   available.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naben-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 11:32:45 by naben-za          #+#    #+#             */
/*   Updated: 2021/03/21 17:57:22 by naben-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_sky.h"

int		check_input(char *values)
{
	int i;

	if (ft_strlen(values) != 31)
		return (0);
	i = -1;
	while (values[++i])
		if (((i % 2 == 0 && (values[i] < '1' && values[i] > '4'))
					|| ((i % 2 == 1 && (values[i] != ' ')))))
			return (0);
	return (1);
}

int		check_l_c(int **board, int nbtest, int l, int c)
{
	while (--c >= 0)
	{
		if (board[l][c] == nbtest)
			return (0);
	}
	while (--l >= 0)
	{
		if (board[l][c] == nbtest)
			return (0);
	}
	return (1);
}

int		check_clues(int **clues)
{
	int i;
	int j;

	i = -1;
	while (++i < 2)
	{
		j = -1;
		while (++j < 4)
		{
			if (i == 0 && clues[i][j] == 4)
				if (clues[1][j] != 1)
					return (0);
			if (i == 1 && clues[i][j] == 4)
				if (clues[0][j] != 1)
						return (0);
		}
	}
	return (1);
}

int		check_clues2(int **clues)
{
	int i;
	int j;

	i = 1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			if (i == 2 && clues[i][j] == 4)
				if (clues[3][j] != 1)
					return (0);
			if (i == 3 && clues[i][j] == 4)
				if (clues[2][j] != 1)
						return (0);
		}
	}
	return (1);
}

void	print_board(int **board, int size)
{
	int i;
	int j;

	i = -1;
	while (++i < size)
	{
		j = -1;
		while (++j < size)
		{
			ft_putchar('0' + board[i][j]);
			ft_putchar(' ');
			if (i < 3 && j == 3)
				ft_putchar('\n');
		}
	}
}
