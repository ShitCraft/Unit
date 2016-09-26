/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oskrypka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 16:07:04 by oskrypka          #+#    #+#             */
/*   Updated: 2016/09/19 16:07:06 by oskrypka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}

int		main(void)
{
	int i;
	int j;
	int *pt;
	int *pt1;

	i = 10;
	j = 15;
	pt = &i;
	pt1 = &j;
	printf("%i\n%i\n", i, j);
	ft_swap(pt, pt1);
	printf("%i\n%i\n", i, j);
	return (0);
}