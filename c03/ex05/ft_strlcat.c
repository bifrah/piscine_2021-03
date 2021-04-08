/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 13:53:44 by bifrah            #+#    #+#             */
/*   Updated: 2021/03/20 13:03:03 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = ft_strlen(dest);
	j = ft_strlen(src);
	if (size == 0 || i >= size)
		return (size + j);
	if (!src[0])
		return (i);
	j = 0;
	while (src[j] && (i + j + 1 < size))
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i + j < size)
		dest[i + j] = '\0';
	return (i + ft_strlen(src));
}
