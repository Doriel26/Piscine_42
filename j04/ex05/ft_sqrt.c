/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchiche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 11:56:43 by dchiche           #+#    #+#             */
/*   Updated: 2017/07/13 10:42:28 by dchiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int a;

	a = 0;
	if (nb < 0)
		return (0);
	while (nb >= a * a && a < 46341)
	{
		if (a * a == nb)
			return (a);
		a++;
	}
	return (0);
}
