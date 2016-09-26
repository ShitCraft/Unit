/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oskrypka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 16:15:51 by oskrypka          #+#    #+#             */
/*   Updated: 2016/09/19 16:15:53 by oskrypka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char c, char c1)
{
	while (c)
	{
		write(1, &c1, 1);
		c--;
	}
}

int		main(int args, char **argv)
{
	char c;
	int i;

	i = 0;
	args = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			c = argv[1][i] - 'a';
			c++;
			print_char(c, argv[1][i]);
		}
		else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			c = argv[1][i] - 'A';
			c++;
			print_char(c, argv[1][i]);
		}
		else
			write(1, &argv[1][i], 1);
		i++;
	}
	return (0);
}