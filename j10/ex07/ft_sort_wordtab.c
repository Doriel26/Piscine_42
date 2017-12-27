/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchiche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 13:42:04 by dchiche           #+#    #+#             */
/*   Updated: 2017/07/25 18:34:54 by dchiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int a;

	a = 0;
	while (s1[a] == s2[a])
	{
		if (s1[a] == '\0')
			return (0);
		a++;
	}
	return (s1[a] - s2[a]);
}

void	ft_sort_params(int argc, char **argv)
{
	int		a;
	char	*t;

	a = 0;
	while (a < argc - 1)
	{
		if (ft_strcmp(argv[a], argv[a + 1]) > 0)
		{
			t = argv[a];
			argv[a] = argv[a + 1];
			argv[a + 1] = t;
			a = -1;
		}
		a++;
	}
}

void	ft_sort_wordtab(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
		i++;
	ft_sort_params(i, tab);
}
