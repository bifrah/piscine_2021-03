/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:57:05 by bifrah            #+#    #+#             */
/*   Updated: 2021/03/15 17:20:02 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_loweralpha(char c)
{
	if (c > 96 && c < 123)
		return (1);
	return (0);
}

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (ft_is_loweralpha(str[i]) == 1)
			str[i] -= 32;
		i++;
	}
	return (str);
}
