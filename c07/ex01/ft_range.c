/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 10:29:59 by bifrah            #+#    #+#             */
/*   Updated: 2021/03/25 10:30:01 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int diff;
	int *tab;

	i = 0;
	diff = max - min;
	if (min >= max)
		return (NULL);
	if (!(tab = (int*)malloc(sizeof(int) * diff)))
		return (0);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
