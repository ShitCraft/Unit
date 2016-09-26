/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oskrypka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 10:28:50 by oskrypka          #+#    #+#             */
/*   Updated: 2016/09/20 10:28:51 by oskrypka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define TAB(x) (x == ' ' || x == '\t')
#define TAB1(x) (x == '\v' || x == '\f' || x == '\r')

int		main(int args, char **argv)
{
	int		i;

	i = 0;
	if (args != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (TAB(argv[1][i]) || TAB1(argv[1][i]))
		i++;
	while (TAB(argv[1][i + 1]) || TAB1(argv[1][i + 1]) || argv[1][i])
	{
		write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
}
