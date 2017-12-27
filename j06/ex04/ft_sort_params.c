/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchiche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 01:42:36 by dchiche           #+#    #+#             */
/*   Updated: 2017/07/17 21:03:59 by dchiche          ###   ########.fr       */
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

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
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

int		main(int argc, char **argv)
{
	int a;

	a = 1;
	ft_sort_params(argc - 1, argv + 1);
	while (a < argc)
	{
		ft_putstr(argv[a]);
		ft_putchar('\n');
		a++;
	}
	return (0);
}
