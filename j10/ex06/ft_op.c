/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchiche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 14:18:35 by dchiche           #+#    #+#             */
/*   Updated: 2017/07/27 00:40:21 by dchiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_proto.h"
#include <stdio.h>

int		(*g_ft_op[5])(int, int) = {ft_add, ft_sub, ft_mult, ft_div, ft_mod};

int		ft_do(int a, int b, char op)
{
	int		res;
	int		i;
	char	tab[5];

	tab[0] = '+';
	tab[1] = '-';
	tab[2] = '*';
	tab[3] = '/';
	tab[4] = '%';
	res = 0;
	i = 0;
	while (i < 5)
	{
		if (tab[i] == op)
			res = g_ft_op[i](a, b);
		i++;
	}
	return (res);
}

int		main(int argc, char **argv)
{
	int a;
	int b;

	if (argc == 4)
	{
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[3]);
		if (argv[2][0] == '/' && b == 0)
			ft_putstr("Stop : division by zero");
		else if (argv[2][0] == '%' && b == 0)
			ft_putstr("Stop : modulo by zero");
		else
			ft_putnbr(ft_do(a, b, argv[2][0]));
		ft_putchar('\n');
	}
	return (0);
}
