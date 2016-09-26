/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshulich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 16:42:11 by oshulich          #+#    #+#             */
/*   Updated: 2016/09/19 16:31:03 by opimenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
			i++;
	}
	write(1, "\n", 1);
}

int main(int argc, char **argv)
{
	if(argc >= 2)
	{
		ft_putstr(argv[argc - 1]);
		return(0);
	}
	write(1, "\n", 1);
	return(0);
}
