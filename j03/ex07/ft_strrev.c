/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchiche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 15:29:28 by dchiche           #+#    #+#             */
/*   Updated: 2017/07/11 19:49:53 by dchiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *len)
{
	int	a;

	a = 0;
	while (len[a] != '\0')
		a++;
	return (a);
}

char	*ft_strrev(char *str)
{
	int i;
	int len;
	char temp;

	i = 0;
	len = ft_strlen(str);
	while (i < len / 2)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
		i++;
	}
	return (str);
}
