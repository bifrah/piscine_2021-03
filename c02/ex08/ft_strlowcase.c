/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 16:54:47 by bifrah            #+#    #+#             */
/*   Updated: 2021/03/15 17:19:33 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_upperalpha(char c)
{
	if (c > 64 && c < 91)
		return (1);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (ft_is_upperalpha(str[i]) == 1)
			str[i] += 32;
		i++;
	}
	return (str);
}
