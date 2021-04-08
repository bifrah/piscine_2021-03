/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 14:39:08 by bifrah            #+#    #+#             */
/*   Updated: 2021/03/24 15:59:23 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int racine;
	int result;

	result = 0;
	racine = 1;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	while (racine <= nb / racine)
	{
		result = racine * racine;
		if (result == nb)
			return (racine);
		racine++;
	}
	return (0);
}
