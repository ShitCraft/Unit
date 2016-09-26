/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oskrypka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 12:48:40 by oskrypka          #+#    #+#             */
/*   Updated: 2016/09/21 12:48:41 by oskrypka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int 			div;
	unsigned char 	num;

	div = 128;
	num = octet;
	while (div > 0)
	{
		if (num >= div)
		{
			write(1, "1", 1);
			num = num % div;
		}
		else if (num < div)
			write(1, "0", 1);
		div = div / 2;
	}
}

int		main(void)
{
	unsigned char num;

	num = 154;
	print_bits(num);
	return (0);
}