/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oskrypka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 18:44:01 by oskrypka          #+#    #+#             */
/*   Updated: 2016/09/19 18:44:02 by oskrypka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define TAB(x) (x == ' ' || x == '\t' || x == '\n')

int		main(int args, char **argv)
{
	int i;
	char c;

	if (args != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (argv[1][i] != '\0')
	{
		if (TAB(argv[1][i]))
			write(1, &argv[1][i], 1);
		else if (argv[1][i] >= 'a' && argv[1][i] <= 'm')
			c = argv[1][i] + 13;
		else if (argv[1][i] >= 'A' && argv[1][i] <= 'M')
			c = argv[1][i] + 13;
		else if (argv[1][i] >= 'n' && argv[1][i] <= 'z')
			c = argv[1][i] - 13;
		else if (argv[1][i] >= 'N' && argv[1][i] <= 'Z')
			c = argv[1][i] - 13;
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}