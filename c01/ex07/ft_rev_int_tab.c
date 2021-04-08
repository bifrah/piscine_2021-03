/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 12:09:46 by bifrah            #+#    #+#             */
/*   Updated: 2021/03/15 12:07:31 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int reverse;

	i = 0;
	while (i < size)
	{
		reverse = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = reverse;
		i++;
		size--;
	}
}
