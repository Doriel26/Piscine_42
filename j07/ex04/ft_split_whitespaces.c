/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchiche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 17:56:35 by dchiche           #+#    #+#             */
/*   Updated: 2017/07/19 17:21:53 by dchiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define WS(x)	(x  == ' ' || x == '\t' || x == '\n' || x == '\v' || x == '\0')

int		nb_words(char *str)
{
	int nb;
	int i;

	i = 0;
	nb = 0;
	while (str[i])
	{
		if ((i == 0 && !WS(str[i])) || (!WS(str[i]) && WS(str[i - 1])))
			nb++;
		i++;
	}
	return (nb);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*tab;

	i = 0;
	while (!WS(str[i]))
		i++;
	tab = (char *)malloc(sizeof(*tab) * (i + 1));
	i = 0;
	while (!WS(str[i]))
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	char	**res;
	int		word;
	int		i;
	int		x;

	i = 0;
	x = 0;
	if (str == 0)
		return (0);
	word = nb_words(str);
	res = (char **)malloc(sizeof(*res) * word + 1);
	while (str[i])
	{
		if ((i == 0 && !WS(str[i])) || (!WS(str[i]) && WS(str[i - 1])))
		{
			res[x] = ft_strdup(str + i);
			x++;
		}
		i++;
	}
	res[x] = 0;
	return (res);
}
