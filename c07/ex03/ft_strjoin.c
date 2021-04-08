/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 10:22:33 by bifrah            #+#    #+#             */
/*   Updated: 2021/03/25 12:45:58 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_count(int size, char **strs)
{
	int		i;
	int		result;

	i = 0;
	result = 0;
	while (i < size)
	{
		result += ft_strlen(strs[i]);
		i++;
	}
	return (result);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*canfree;
	char	*joined;
	int		i;
	int		mem_alloc;

	i = 0;
	mem_alloc = ft_count(size, strs) + ft_strlen(sep) * (size - 1);
	canfree = malloc(sizeof(char));
	canfree[0] = '\0';
	if (size == 0)
		return (canfree);
	if (!(joined = (char*)malloc(sizeof(char) * mem_alloc + 1)))
		return (NULL);
	while (i < size)
	{
		ft_strcat(joined, strs[i]);
		if (i != size - 1)
			ft_strcat(joined, sep);
		i++;
	}
	return (joined);
}
