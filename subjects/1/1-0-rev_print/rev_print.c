/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opimenov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 17:47:28 by opimenov          #+#    #+#             */
/*   Updated: 2016/09/19 18:09:00 by opimenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rev_print(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	i--;
	while (i != -1)
		write(1, &str[i--], 1);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		rev_print(argv[1]);
		write(1, "\n", 1);
		return (0);
	} else write(1, "\n", 1);
	return (0);
}
