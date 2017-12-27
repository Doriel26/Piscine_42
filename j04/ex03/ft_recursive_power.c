/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchiche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 10:40:58 by dchiche           #+#    #+#             */
/*   Updated: 2017/07/12 11:03:50 by dchiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int res;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		res = nb * (ft_recursive_power(nb, power - 1));
		return (res);
	}
}
