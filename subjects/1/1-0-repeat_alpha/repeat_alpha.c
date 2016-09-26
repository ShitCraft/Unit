/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshulich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 19:53:28 by oshulich          #+#    #+#             */
/*   Updated: 2016/09/15 20:35:56 by oshulich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_count_letter(char letter)
{
	int	repeat;

	repeat = 1;
	if (letter >= 65 && letter <= 90)
		repeat = letter - 64;
	if (letter >= 97 && letter <= 122)
		repeat = letter - 96;
	return (repeat);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	repeat;

	i = 0;
	j = 0;
	repeat = 0;
	if (ac >= 2)
	{
		while (av[1][i] != '\0')
		{
		repeat = ft_count_letter(av[1][i]);
		{
			while (j < repeat)
			{
				write(1, &av[1][i], 1);
				j++;
			}
		j = 0;
		i++;
		}
		}
	}
	write(1, "\n", 1);
	return (0);
}
