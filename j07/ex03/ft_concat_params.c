/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchiche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 15:56:01 by dchiche           #+#    #+#             */
/*   Updated: 2017/07/23 23:30:34 by dchiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int x;

	i = 0;
	x = 0;
	while (dest[i] != '\0')
		i++;
	while (src[x] != '\0')
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	dest[i] = '\n';
	dest[i + 1] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		len;
	int		i;

	i = 1;
	len = 0;
	if (argc == 1)
		return ("");
	while (i < argc)
	{
		len = len + ft_strlen(argv[i]) + 1;
		i++;
	}
	str = (char*)malloc(sizeof(char) * (len + 1));
	i = 1;
	while (i < argc)
	{
		ft_strcat(str, argv[i]);
		i++;
	}
	i = 0;
	while (str[i])
		i++;
	str[i - 1] = '\0';
	return (str);
}
