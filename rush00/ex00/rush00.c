/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsap <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 08:21:27 by gsap              #+#    #+#             */
/*   Updated: 2021/03/14 11:12:52 by gsap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putcharall(int c, int l, int x, int y)
{
	if ((l == 1 || l == y) && (c == 1 || c == x))
		ft_putchar('o');
	else if ((l == 1 || l == y) && (c > 1 && c < x))
		ft_putchar('-');
	else if ((c == 1 || c == x) && (l > 1 && l < y))
		ft_putchar('|');
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
	while (++l <= y)
	{
		c = 0;
		while (++c <= x)
			ft_putcharall(c, l, x, y);
		ft_putchar('\n');
	}
}
