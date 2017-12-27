/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchiche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 04:42:21 by dchiche           #+#    #+#             */
/*   Updated: 2017/07/16 19:53:44 by dchiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nmatch(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '\0' || *s2 == '\0')
	{
		if (*s1 == '\0' && *s2 == '*')
			return (nmatch(s1, s2 + 1));
		return (0);
	}
	if (*s1 == *s2)
		return (nmatch(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (nmatch(s1, s2 + 1) + nmatch(s1 + 1, s2));
	return (0);
}
