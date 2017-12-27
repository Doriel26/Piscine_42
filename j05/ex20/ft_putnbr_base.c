/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchiche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 01:45:27 by dchiche           #+#    #+#             */
/*   Updated: 2017/07/21 04:14:54 by dchiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_base(char *base)
{
	int i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

void	ft_putnbr_base_recv(int nbr, char *base, int b)
{
	if (nbr >= b)
	{
		ft_putnbr_base_recv(nbr / b, base, b);
		ft_putnbr_base_recv(nbr % b, base, b);
	}
	else
		ft_putchar(base[nbr]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int b;

	b = ft_base(base);
	ft_putnbr_base_recv(nbr, base, b);
}

int		main()
{
	ft_putnbr_base(6, "AB");
	return (0);
}

