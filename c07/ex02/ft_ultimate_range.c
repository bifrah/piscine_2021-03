/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 10:30:21 by bifrah            #+#    #+#             */
/*   Updated: 2021/03/25 10:30:42 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int diff;

	i = 0;
	diff = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!(*range = (int*)malloc(sizeof(int) * diff)))
		return (-1);
	while (min < max)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return (diff);
}
