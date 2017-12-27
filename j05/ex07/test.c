/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchiche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 09:03:56 by dchiche           #+#    #+#             */
/*   Updated: 2017/07/14 10:30:54 by dchiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int a;

	a = 0;
	while (s1[a] == s2[a] && a < n)
	{
		if (s1[a] == '\0')
			return (0);
		if (a == n)
			return (0);
		a++;
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
	}
	if (s1[a] != s2[a])
		return (s1[a] - s2[a]);
}

int		main()
{
	char s1[] = "Sale frero comment tu vas";
	char s2[] = "Salut merde";

	printf("%u", ft_strncmp(s1, s2, 50));
	return (0);
}
