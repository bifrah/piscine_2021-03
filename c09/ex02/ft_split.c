/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 12:56:21 by bifrah            #+#    #+#             */
/*   Updated: 2021/03/29 16:35:52 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_comp(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (-1);
		i++;
	}
	return (1);
}

int		ft_cw(char *str, char *charset)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && (ft_comp(str[i], charset) == -1))
			i++;
		if (str[i] && (ft_comp(str[i], charset) == 1))
			count++;
		while (str[i] && (ft_comp(str[i], charset) == 1))
			i++;
	}
	return (count);
}

int		ft_cl(char *str, char *charset, int i)
{
	int count;

	count = 0;
	while (str[i] && ft_comp(str[i], charset) == -1)
		i++;
	while (str[i] && ft_comp(str[i], charset) == 1)
	{
		count++;
		i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		l;
	int		w;
	char	**tab;

	i = 0;
	l = 0;
	w = 0;
	if (!(tab = (char **)malloc(sizeof(char *) * (ft_cw(str, charset) + 1))))
		return (NULL);
	while (w < ft_cw(str, charset))
	{
		while (ft_comp(str[i], charset) == -1)
			i++;
		if (!(tab[w] = (char *)malloc(sizeof(char)
			* (ft_cl(str, charset, i) + 1))))
			return (NULL);
		while (str[i] && ft_comp(str[i], charset) == 1)
			tab[w][l++] = str[i++];
		tab[w++][l] = '\0';
		l = 0;
	}
	tab[ft_cw(str, charset)] = 0;
	return (tab);
}
