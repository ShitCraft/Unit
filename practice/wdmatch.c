/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oskrypka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 19:18:26 by oskrypka          #+#    #+#             */
/*   Updated: 2016/09/20 19:19:03 by oskrypka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		main(int args, char **argv)
{
	char *s1;
	char *s2;

	if (args != 3)
	{
		write(1, c, 1);
	}
	s1 = argv[1];
	s2 = argv[2];
	while (*s2)
	{
		if (*s1 == *s2)
			s1++;
		if (!*s1)
		{
			write(1, argv[1], ft_strlen(argv[1]));
			write(1, "\n", 1);
			return (0);
		}
		s2++;
	}
	write(1, "\n", 1);
	return (0);
}
