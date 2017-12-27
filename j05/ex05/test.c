/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchiche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 17:50:01 by dchiche           #+#    #+#             */
/*   Updated: 2017/07/13 21:52:20 by dchiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int a;
	int b;
	int x;

	a = 0;
	b = 0;
	while (str[b] != '\0')
	{
		if (str[b] == to_find[a])
		{
			x = b;
			while (to_find[a] == str[b])
			{
				if (to_find[a] == '\0')
					return (str + x);
				a++;
				b++;
			}
			if (to_find[a] == '\0')
				return (str + x);
		}
		b++;
	}
	return (0);
}

int		main()
{
	char str[] = "salut frero comment tu vas?";
	char find[] = "vas?";
	printf("%s", ft_strstr(str, find));
	return(0);
}
