/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oskrypka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 17:08:45 by oskrypka          #+#    #+#             */
/*   Updated: 2016/09/20 17:08:46 by oskrypka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_while(char **argv, int k)
{
	int i;
	int j;

	i = 0;
	j = i + 1;
	while (argv[k][i] != '\0')
	{
		while (argv[k][j] != '\0')
		{
			if (argv[k][i] == argv[k][j])
				argv[k][j] = '\n';
			j++;
		}
		i++;
		j = i + 1;
	}
}

void	ft_putstr(char **argv, int k)
{
	int i;

	i = 0;
	while (argv[k][i] != '\0')
		{
			if (argv[k][i] != '\n')
				write(1, &argv[k][i], 1);
			i++;
		}
}

int		main(int args, char **argv)
{
	int i;
	int j;

	if (args != 3)
		write(1, "\n", 1);
	else
	{
		ft_while(argv, 1);
		ft_while(argv, 2);
		i = 0;
		j = 0;
		while (argv[1][i] != '\0')
		{
			while (argv[2][j] != '\0')
			{
				if (argv[1][i] == argv[2][j])
					argv[2][j] = '\n';
				j++;
			}
			i++;
			j = 0;
		}
		ft_putstr(argv, 1);
		ft_putstr(argv, 2);
		write(1, "\n", 1);
	}
	return (0);
}