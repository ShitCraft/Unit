/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opimenov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 16:06:19 by opimenov          #+#    #+#             */
/*   Updated: 2016/09/19 16:15:13 by opimenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char numb;

	numb = '0';
	while(numb <= '9')
	{
		write(1, &numb, 1);
		numb++;
	}
}

int		main(void)
{
	ft_print_numbers();
	return (0);
}
