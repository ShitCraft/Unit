/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opimenov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 16:56:42 by opimenov          #+#    #+#             */
/*   Updated: 2016/09/19 16:59:47 by opimenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int x;
	int y;

	x = 1;
	y = 0;
	if (argc == 2)
	{
		while(argv[x][y] != '\0')
		{
			if (argv[x][y] == 'z')
			{
				ft_putchar('z');
				ft_putchar('\n');
				return (0);
			}
			y++;
		}
	}
	else
	{
		ft_putchar('z');
		ft_putchar('\n');
		return (0);
	}
	ft_putchar('z');
	ft_putchar('\n');
	return(0);
}
