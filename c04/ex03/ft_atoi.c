/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 15:02:00 by bifrah            #+#    #+#             */
/*   Updated: 2021/03/20 16:25:06 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\v' || c == '\t' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int		ft_score(char c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

int		ft_num(char c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}

int		ft_posneg(char *str)
{
	int i;
	int score;

	i = 0;
	score = 0;
	while (ft_num(str[i]) == 0)
	{
		if (str[i] == '-')
			score++;
		i++;
	}
	if ((score %= 2) == 0 )
		return (1);
	return (-1);
}

int		ft_atoi(char *str)
{
	int i;
	int result;
	
	i = 0;
	result = 0;
	while (ft_space(str[i]) == 1)
		i++;
	while (ft_score(str[i]) == 1)
		i++;
	while(ft_num(str[i]) == 1)
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	if (ft_posneg(str) == -1)
			result *= -1;
	return (result);
}
