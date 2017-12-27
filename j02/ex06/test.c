/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchiche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 23:36:46 by dchiche           #+#    #+#             */
/*   Updated: 2017/07/07 11:23:46 by dchiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putnbr(int nb)
{
	double nbr;

	nb = nbr;
	if (nb < 0)
	{
		nb = nb * (-1);
		ft_putchar('-');
		ft_putnbr(nb);
	}                                                                                        
	else if (nb >= 0 && nb < 10)
	{
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar('0' + (nb % 10));
	}
}

int		main(void)
{
	ft_putnbr(-999999999999999999);
	return (0);
}
