/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchiche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 22:45:47 by dchiche           #+#    #+#             */
/*   Updated: 2017/07/25 23:03:11 by dchiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

int		main(int argc, char **argv)
{
	if (argc == 1)
		return (0);
	t_list	*elem;
	elem = ft_create_elem(argv[1]);
	printf("%s", (char *)elem->data);
	return (0);
}
