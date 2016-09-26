/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oskrypka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 12:14:14 by oskrypka          #+#    #+#             */
/*   Updated: 2016/09/20 12:14:15 by oskrypka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int 	ft_strmatch(char *str, char c)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int 	main(int args, char **argv)
{
	int i;

	if (args == 3)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			if (ft_strmatch(argv[2], argv[1][i]) >= 0 &&
				ft_strmatch(argv[1], argv[1][i]) == i)
				write(1, argv[1] + i, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}