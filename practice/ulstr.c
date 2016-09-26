/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oskrypka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 18:31:31 by oskrypka          #+#    #+#             */
/*   Updated: 2016/09/19 18:31:32 by oskrypka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int args, char **argv)
{
	int i;
	char c;

	i = 0;
	if (args != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] >= 97 && argv[1][i] <= 122)
		{
			c = argv[1][i] - 32;
			write(1, &c, 1);
		}
		else if (argv[1][i] >= 65 && argv[1][i] <= 90)
		{
			c = argv[1][i] + 32;
			write(1, &c, 1);
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
