/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oskrypka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 11:17:47 by oskrypka          #+#    #+#             */
/*   Updated: 2016/09/20 11:17:49 by oskrypka         ###   ########.fr       */
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
	args = 0;
	ft_putstr(argv[1]);
	return (0);
}