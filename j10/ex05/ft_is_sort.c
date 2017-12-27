/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchiche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 05:08:34 by dchiche           #+#    #+#             */
/*   Updated: 2017/07/26 14:42:27 by dchiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int dec;
	int inc;

	i = 0;
	dec = 1;
	inc = 1;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0)
			dec = 0;
		else if ((*f)(tab[i], tab[i + 1]) > 0)
			inc = 0;
		i++;
	}
	return (dec || inc);
}
