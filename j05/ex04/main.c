/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchiche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 15:52:43 by dchiche           #+#    #+#             */
/*   Updated: 2017/07/13 17:48:36 by dchiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main()
{
	char src1[] = "qwertyuiop";
	char dest1[50] = "Coucouuu";
	ft_strncpy(dest1, src1, 15);
	printf("%s\n", src1);
	printf("Fake strncpy : %s\n", dest1);
	
	char src2[] = "qwertyuiop";
	char dest2[50] = "Coucouuu";
	strncpy(dest2, src2, 15);
	printf("Real strncpy : %s\n", dest2);
	printf("%s ", src2);

	return (0);
}
