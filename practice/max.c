/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oskrypka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 19:01:45 by oskrypka          #+#    #+#             */
/*   Updated: 2016/09/20 19:01:47 by oskrypka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	unsigned int i;
	int max;

	i = 0;
	max = tab[i];
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

int		main(void)
{
	int tab[] = {1, 2, 4 , 50, 5, 9, 10, 13, 27};
	int length;

	length = 9;
	printf("%u", max(tab, length));
}