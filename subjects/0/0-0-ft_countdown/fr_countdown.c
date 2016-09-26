/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshulich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 13:47:54 by oshulich          #+#    #+#             */
/*   Updated: 2016/09/19 16:04:28 by opimenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void  ft_print_numbers(void)
{
	char numb;

	numb = '9';
	while(numb >= '0')
	{
		ft_putchar(numb);
		numb--;
	}
}

int main()
{
	ft_print_numbers();
	ft_putchar('\n');
	return(0);
}
