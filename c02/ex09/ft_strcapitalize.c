/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:45:15 by bifrah            #+#    #+#             */
/*   Updated: 2021/03/17 12:14:25 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_uppercase(char c)
{
	if (c > 64 && c < 91)
		return (1);
	return (0);
}

int		ft_is_lowercase(char c)
{
	if (c > 96 && c < 123)
		return (1);
	return (0);
}

int		ft_alphanum(char c)
{
	if ((c > 47 && c < 58) || (c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((i == 0 && ft_is_lowercase(str[i]) == 1)
				|| (ft_is_lowercase(str[i]) == 1
					&& ft_alphanum(str[i - 1]) == 0))
			str[i] = str[i] - 32;
		if (i != 0 && ft_is_uppercase(str[i]) == 1
				&& ft_alphanum(str[i - 1]) == 1)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
