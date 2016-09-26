/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oskrypka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 10:50:36 by oskrypka          #+#    #+#             */
/*   Updated: 2016/09/19 10:50:37 by oskrypka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char c;

	while (*str != '\0')
	{
		c = *str;
		write(1, &c, 1);
		str++;
	}
}

int		main(int args, char **argv)
{
	if (args != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	ft_putstr(argv[args - 1]);
}