/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsap <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 08:20:27 by gsap              #+#    #+#             */
/*   Updated: 2021/03/14 11:17:52 by gsap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_x1(int c, int l, int x, int y)
{
	while (++l <= y)
	{
		c = 0;
		while (++c <= x)
		{
			if (l == 1 && c == 1)
				ft_putchar('/');
			else if (l == y && c == 1)
				ft_putchar('\\');
			else
				ft_putchar('*');
		}
		ft_putchar('\n');
	}
}

void	ft_y1(int c, int l, int x, int y)
{
	while (++l <= y)
	{
		c = 0;
		while (++c <= x)
		{
			if (l == y && c == 1)
				ft_putchar('/');
			else if (l == 1 && c == x)
				ft_putchar('\\');
			else
				ft_putchar('*');
		}
		ft_putchar('\n');
	}
}

void	ft_putcharall(int c, int l, int x, int y)
{
	if ((l == 1 && c == 1) || (l == y && c == x))
		ft_putchar('/');
	else if ((l == 1 && c == x) || (l == y && c == 1))
		ft_putchar('\\');
	else if (((l == 1 || l == y) && (c > 1 && c < x))
			|| ((c == 1 || c == x) && (l > 1 && l < y)))
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int c;
	int l;

	l = 0;
	if (y <= 0 || x <= 0)
		return ;
	if (x == 1 && y > 1)
	{
		ft_x1(c, l, x, y);
		return ;
	}
	if (y == 1 && x > 1)
	{
		ft_y1(c, l, x, y);
		return ;
	}
	while (++l <= y)
	{
		c = 0;
		while (++c <= x)
		{
			ft_putcharall(c, l, x, y);
		}
		ft_putchar('\n');
	}
}
