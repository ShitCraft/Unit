/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oskrypka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 11:15:12 by oskrypka          #+#    #+#             */
/*   Updated: 2016/09/21 11:15:13 by oskrypka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "oper.h"

int		ft_make_calc(int a, int b, char c)
{
	int res;

	if (c == '+')
		res = a + b;
	if (c == '-')
		res = a - b;
	if (c == '*')
		res = a * b;
	if (c == '/')
		res = a / b;
	if (c == '%')
		res = a % b;
	return (res);
}

int		main(int args, char **argv)
{
	int res;

	if (args == 4)
	{
		res = ft_make_calc(atoi(argv[1]), atoi(argv[3]), argv[2][0]);
		printf("%i", res);
	}
	printf("\n");
	return (0);
}