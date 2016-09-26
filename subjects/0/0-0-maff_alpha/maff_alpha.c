/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshulich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 15:52:26 by oshulich          #+#    #+#             */
/*   Updated: 2016/09/19 16:23:15 by opimenov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void maff_alpha(void)
{
	char letter;
	char s_letter;
	int len;

	s_letter = 'a';
	letter = 'B';
	len = 0;
	while(len <=12)
	{
		ft_putchar(s_letter);
		ft_putchar(letter);
		s_letter = s_letter + 2;
		letter = letter + 2;;
		len++;;
	}
}

int		main(void)
{
	maff_alpha();
	return (0);
}
