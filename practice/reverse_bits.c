/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oskrypka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 15:56:35 by oskrypka          #+#    #+#             */
/*   Updated: 2016/09/20 15:56:36 by oskrypka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	octet = (octet >> 4) | (octet << 4);
	return (octet);
}

int		main(void)
{
	unsigned char c;

	c = 80;
	printf("%c\n", c);
	printf("%c", reverse_bits(c));
	return (0);
}