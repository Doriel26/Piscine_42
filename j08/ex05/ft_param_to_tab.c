/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchiche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 11:01:44 by dchiche           #+#    #+#             */
/*   Updated: 2017/07/24 22:04:20 by dchiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

char				*ft_strdup(char *str)
{
	int		i;
	char	*dest;

	i = 0;
	while (str[i])
		i++;
	if (!(dest = (char *)malloc(sizeof(*dest) * (i + 1))))
		return (0);
	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par	*struct_tab;
	int			j;
	int			size;

	j = 0;
	if (!(struct_tab = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1))))
		return (0);
	while (j < ac)
	{
		size = 0;
		while (av[j][size])
			size++;
		struct_tab[j].size_param = size;
		struct_tab[j].str = av[j];
		struct_tab[j].copy = ft_strdup(av[j]);
		struct_tab[j].tab = ft_split_whitespaces(av[j]);
		j++;
	}
	struct_tab[j].str = 0;
	return (struct_tab);
}
