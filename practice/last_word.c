/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oskrypka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 12:27:09 by oskrypka          #+#    #+#             */
/*   Updated: 2016/09/20 12:27:09 by oskrypka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		if (str[i] >= 33 && str[i] <= 126)
			write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int		main(int args, char **argv)
{
	int		i;
	char	*last;

	i = 0;
	if (args != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	last = &argv[1][i];
	while (argv[1][i] != '\0')
	{
		if (!(argv[1][i] >= 33) && (!argv[1][i] <= 126))
		{
			if (argv[1][i + 1] >= 33 && argv[1][i + 1] <= 126)
				last = &str[i + 1];
		}
		i++;
	}
	if (last)
		ft_putstr(last);
	return (0);
}