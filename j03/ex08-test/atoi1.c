/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchiche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 10:44:39 by dchiche           #+#    #+#             */
/*   Updated: 2017/07/10 20:07:05 by dchiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_not_whitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n'
			|| c == '\v' || c == '\f' || c == '\r');
}

int		ft_is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int		ft_atoi(char *str)
{
	int i;
	int res;
	int is_neg;

	i = 0;
	res = 0;
	is_neg = 0;
	while(str[i] != '\0' && ft_not_whitespace(str[i]) == 1)
	{
		i++;
	}
	if (str[i] == '-')
	{
		is_neg = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;

	if (str[i] < '0' || str[i] > '9')
		return (0);
	
	while (str[i] != '\0' && ft_is_digit(str[i]))
	{
		res = res * 10 + (str[i++] - '0');
	}
	return (res);
}
