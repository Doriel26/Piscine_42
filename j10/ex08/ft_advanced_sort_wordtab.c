/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchiche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 15:20:43 by dchiche           #+#    #+#             */
/*   Updated: 2017/07/26 19:31:14 by dchiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	char	*t;

	i = 0;
	j = 0;
	while (tab[i])
		i++;
	while (j < i - 1)
	{
		if (cmp(tab[j], tab[j + 1]) > 0)
		{
			t = tab[j];
			tab[j] = tab[j + 1];
			tab[j + 1] = t;
			j = -1;
		}
		j++;
	}
}
