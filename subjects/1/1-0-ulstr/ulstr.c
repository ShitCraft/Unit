/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opimenov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 18:39:18 by opimenov          #+#    #+#             */
/*   Updated: 2016/09/19 18:41:39 by opimenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ul(char *str)
{
	int i;
	int b;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			b = str[i] + 32;
			write(1, &b, 1);
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			b = str[i] - 32;
			write(1, &b, 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
int		main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		ft_ul(argv[1]);
		write(1, "\n", 1);
	}
	return (0);
}
