/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oskrypka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 12:18:55 by oskrypka          #+#    #+#             */
/*   Updated: 2016/09/19 12:18:57 by oskrypka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define TAB(x) (x == ' ' || x == '\n' || x == '\t')
#define TAB1(x) (x == '\v' || x == '\f' || x == '\r')

int		check_sign(char c)
{
	if (c == '-')
		return (-1);
	if (c == '+')
		return (1);
	else
		return (0);
}

int		ft_atoi(const char *str)
{
	int i;
	int num;
	int j;

	num = 0;
	j = 0;
	while (TAB(str[j]) || TAB1(str[j]))
		j++;
	if (check_sign(str[j]) == -1)
	{
		i = 1;
		j++;
	}
	else if (check_sign(str[j]) == 1)
		j++;
	while (str[j] >= '0' && str[j] <= '9')
	{
		num = num * 10 + str[j] - '0';
		j++;
	}
	if (i == 1)
		num = -num;
	return (num);
}

int		main(int args, char **argv)
{
	args = 1;
	printf("%i", ft_atoi(argv[1]));
	return (0);
}