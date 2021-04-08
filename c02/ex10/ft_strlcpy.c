/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 13:16:18 by bifrah            #+#    #+#             */
/*   Updated: 2021/03/21 16:48:12 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	if (size > 1)
	{
		while (src[i] && size > i + 1)
		{
			dest[i] = src[i];
			i++;
		}
	}
	if (size >= 1)
		dest[i] = '\0';
	return (ft_strlen(src));
}
