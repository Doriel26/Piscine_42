/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchiche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 15:52:43 by dchiche           #+#    #+#             */
/*   Updated: 2017/07/13 16:01:37 by dchiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main()
{
	char src[] = "Hello";
	char dest[] = "Coucouuu";

	printf("%s ", src);
	printf("%s ", dest);
	ft_strcpy(dest, src);
	printf("%s ", src);
	printf("%s ", dest);
}
