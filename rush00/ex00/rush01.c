/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchiche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 02:42:46 by dchiche           #+#    #+#             */
/*   Updated: 2017/07/09 20:11:38 by dchiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str, int len);

void	firstline(int x)
{
	int		f;

	f = 1;
	x = x - 1;
	if (f == 1)
		ft_putchar('/');
	while (f < x)
	{
		ft_putchar('*');
		f++;
	}
	if (f == x)
		ft_putchar('\\');
	ft_putchar('\n');
}

void	lastline(int x)
{
	int		l;

	l = 1;
	x = x - 1;
	if (l == 1)
		ft_putchar('\\');
	while (l < x)
	{
		ft_putchar('*');
		l++;
	}
	if (l == x)
		ft_putchar('/');
	ft_putchar('\n');
}

void	middleline(int y, int x)
{
	int		m;
	int		n;

	m = 1;
	n = 1;
	y = y - 1;
	x = x - 1;
	while (m < y)
	{
		ft_putchar('*');
		while (n < x)
		{
			ft_putchar(' ');
			n++;
		}
		n = 1;
		ft_putchar('*');
		ft_putchar('\n');
		m++;
	}
}

void	conditionx(int y)
{
	int		ymin;

	ymin = 2;
	ft_putchar('/');
	ft_putchar('\n');
	while (ymin < y && y >= 3)
	{
		ft_putchar('*');
		ft_putchar('\n');
		ymin++;
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (y == 1 && x > 1)
	{
		firstline(x);
	}
	if (x == 1 && y > 1)
	{
		conditionx(y);
	}
	if (x == 1 && y == 1)
		ft_putchar('/');
	if (x > 1 && y > 1)
	{
		firstline(x);
		middleline(y, x);
		lastline(x);
	}
	if (x <= 0 || y <= 0)
		ft_putstr("Error: Put stricly positive integers! #askbocal\n", 48);
}
