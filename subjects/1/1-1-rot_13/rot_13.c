/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opimenov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 18:55:49 by opimenov          #+#    #+#             */
/*   Updated: 2016/09/19 19:49:19 by opimenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rot_13(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (((str[i] >= 'A') && (str[i] <= 'Z')) || ((str[i] >= 'a') && (str[i] <= 'z')))
		{
		if ((str[i] >= 'A') && (str[i] <= 'M'))
			ft_putchar(str[i] + 13);
		if ((str[i] >= 'N') && (str[i] <= 'Z'))
			ft_putchar(str[i] - 13);
		if ((str[i] >= 'a') && (str[i] <= 'm'))
			ft_putchar(str[i] + 13);
		if ((str[i] >= 'n') && (str[i] <= 'z'))
			ft_putchar(str[i] - 13);
		}
		else
			ft_putchar(str[i]); 
		i++;
	}
}
int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	} 
	rot_13(argv[1]);
	ft_putchar('\n');
	return (0);
}
