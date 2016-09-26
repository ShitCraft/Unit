/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oskrypka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 13:04:39 by oskrypka          #+#    #+#             */
/*   Updated: 2016/09/21 13:04:40 by oskrypka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && (*s2 != '\0' || *s2 != '\0'))
	{
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')
			return (0);
	else
		return (*s1 - *s2);
}

int		main(int args, char **argv)
{
	args = 0;
	printf("%i\n", ft_strcmp(argv[1], argv[2]));
	printf("%i\n", strcmp(argv[1], argv[2]));
	return (0);
}