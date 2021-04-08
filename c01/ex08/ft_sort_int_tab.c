/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 10:12:41 by bifrah            #+#    #+#             */
/*   Updated: 2021/03/15 11:01:43 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int convert;
	int counter;

	convert = 0;
	counter = 0;
	while (counter < (size - 1))
	{
		if (tab[counter] > tab[counter + 1])
		{
			convert = tab[counter];
			tab[counter] = tab[counter + 1];
			tab[counter + 1] = convert;
			counter = 0;
		}
		else
			counter++;
	}
}
