/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchiche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 13:47:34 by dchiche           #+#    #+#             */
/*   Updated: 2017/07/11 17:24:40 by dchiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int a;
	int t;
	int b;

	a = 0;
	b = 0;
	while (a < size - b - 1)
	{
		while (a < size - 1)
		{
			if (tab[a] > tab[a + 1])
			{
				t = tab[a];
				tab[a] = tab[a + 1];
				tab[a + 1] = t;
			}
			a++;
		}
		b++;
		a = 0;
	}
}
