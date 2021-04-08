/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naben-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 14:19:40 by naben-za          #+#    #+#             */
/*   Updated: 2021/03/21 17:45:44 by naben-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		**start_solve(int **board, int **clues, int size)
{
	int i;
	int j;

	i = -1;
	while (++i < size)
	{
		j = -1;
		while (++j < size)
		{
			if (i == 0 && clues[i][j] == 1)
				board[0][j] = 4;
			if (i == 1 && clues[i][j] == 1)
				board[size - 1][j] = 4;
			if (i == 0 && clues[i][j] == 4)
				board[0][j] = 1;
			if (i == 1 && clues[i][j] == 4)
				board[size - 1][j] = 1;
		}
	}
	return (board);
}

int		**start2_solve(int **board, int **clues, int size)
{
	int i;
	int j;

	i = -1;
	while (++i < size)
	{
		j = -1;
		while (++j < size)
		{
			if (i == 2 && clues[i][j] == 1)
				board[j][0] = 4;
			if (i == 3 && clues[i][j] == 1)
				board[j][size - 1] = 4;
			if (i == 2 && clues[i][j] == 4)
				board[j][0] = 1;
			if (i == 3 && clues[i][j] == 4)
				board[j][size - 1] = 1;
		}
	}
	return (board);
}

int		**next_solve(int **board, int **clues, int size)
{
	int i;
	int j;

	i = -1;
	while (++i < size)
	{
		j = -1;
		while (++j < size)
		{
			if (i == 0 && clues[i][j] == 4)
			{
				board[1][j] = 2;
				board[2][j] = 3;
				board[3][j] = 4;
			}
		}
	}
	return (board);
}

int		**next2_solve(int **board, int **clues, int size)
{
	int i;
	int j;

	i = -1;
	while (++i < size)
	{
		j = -1;
		while (++j < size)
		{
			if (i == 1 && clues[i][j] == 4)
			{
				board[0][j] = 4;
				board[1][j] = 3;
				board[2][j] = 2;
			}
		}
	}
	return (board);
}
