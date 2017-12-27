/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchiche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 14:30:57 by dchiche           #+#    #+#             */
/*   Updated: 2017/07/19 16:33:18 by dchiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define WS(x)(x  == ' ' || x == '\t' || x == '\n' || x == '\v' || x == '\0')

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

char	**ft_split_whitespaces(char *str);

void	ft_print_words_tables(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
}
