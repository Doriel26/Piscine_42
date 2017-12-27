/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 13:02:46 by mdeville          #+#    #+#             */
/*   Updated: 2017/07/10 12:04:11 by dchiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int	ft_atoi(char *str);

int	main()
{
	printf("42: %d\n", ft_atoi("42"));
	assert(ft_atoi("42") == atoi("42"));
	printf(" 42: %d\n", ft_atoi(" 42"));
	assert(ft_atoi(" 42") == atoi(" 42"));
	printf("a42: %d\n", ft_atoi("a42"));
	assert(ft_atoi("a42") == atoi("a42"));
	printf("-42: %d\n", ft_atoi("-42"));
	assert(ft_atoi("-42") == atoi("-42"));
	printf("+42: %d\n", ft_atoi("+42"));
	assert(ft_atoi("+42") == atoi("+42"));
	printf("042: %d\n", ft_atoi("042"));
	assert(ft_atoi("042") == atoi("042"));
	printf("42+fw: %d\n", ft_atoi("42+fw"));
	assert(ft_atoi("42+fw") == atoi("42+fw"));
	printf("++42: %d\n", atoi("++42"));
	assert(ft_atoi("--42") == atoi("--42"));
	printf("42ewfw101: %d\n", atoi("42ewfw101"));
}

