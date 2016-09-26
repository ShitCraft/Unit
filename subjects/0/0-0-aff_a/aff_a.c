/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshulich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 10:51:53 by oshulich          #+#    #+#             */
/*   Updated: 2016/09/15 13:38:58 by oshulich         ###   ########.fr       */
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
			if (argv[x][y] == 'a')
			{
			ft_putchar('a');
			ft_putchar('\n');
			return (0);
			}
			y++;
		}
	}
	else
	{
		ft_putchar('a');
	}
	ft_putchar('\n');
	return(0);
}
