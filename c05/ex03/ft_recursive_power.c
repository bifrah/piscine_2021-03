/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 14:37:59 by bifrah            #+#    #+#             */
/*   Updated: 2021/03/23 14:38:15 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int result;

	result = 1;
	if (power == 0 && nb == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 0)
		result = nb * ft_recursive_power(nb, power - 1);
	else
		return (1);
	return (result);
}
