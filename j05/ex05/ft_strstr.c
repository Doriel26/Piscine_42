/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchiche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 17:50:01 by dchiche           #+#    #+#             */
/*   Updated: 2017/07/17 22:00:58 by dchiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int a;
	int b;
	int x;

	a = 0;
	b = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[a] != '\0')
	{
		x = a;
		b = 0;
		while (to_find[b] == str[x])
		{
			b++;
			x++;
			if (to_find[b] == '\0')
				return (str + a);
		}
		a++;
	}
	return (0);
}
