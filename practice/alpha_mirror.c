/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oskrypka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 18:47:59 by oskrypka          #+#    #+#             */
/*   Updated: 2016/09/20 18:48:00 by oskrypka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int args, char **argv)
{
	int i;
	char c;
	char c1;

	i = 0;
	if (args != 2)
		write(1, "\n", 1);
	else
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				c = argv[1][i] - 'a';
				c1 = 'z' - c;
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				c = argv[1][i] - 'A';
				c1 = 'Z' - c;
			}
			else
				c1 = argv[1][i];
			write(1, &c1, 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}