/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 14:39:46 by bifrah            #+#    #+#             */
/*   Updated: 2021/03/24 16:22:30 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	unsigned int div;

	div = 3;
	if (!(nb % 2))
		return (0);
	while (div <= (unsigned int)nb / div)
	{
		if (!(nb % div))
			return (0);
		div += 2;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}
