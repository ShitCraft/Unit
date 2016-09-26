/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opimenov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 18:25:15 by opimenov          #+#    #+#             */
/*   Updated: 2016/09/19 18:33:53 by opimenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_repl(char *str, char *a, char *b)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == a[0])
			write(1, b, 1);
		else
			write(1, &str[i], 1);
		i++;
	}
}
int		main(int argc, char **argv)
{
	if (argc != 4)
		write(1, "\n", 1);
	else if (argv[2][1] != '\0' && argv[3][1] != '\0')
		write(1, "\n", 1);
	else
	{
		ft_repl(argv[1], argv[2], argv[3]);
		write(1, "\n", 1);
	}
}
