/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oskrypka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 14:32:38 by oskrypka          #+#    #+#             */
/*   Updated: 2016/09/21 14:32:39 by oskrypka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int num)
{
	char c;

	if (num >= 10)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
	{
		c = num + '0';
		write(1, &c, 1);
	}
}

int		atoi(char *str)
{
	int i;
	int k;
	int num;

	num = 0;
	i = 0;
	k = 0;
	if (str[i] == '-')
	{
		k = 1;
		i++;
	}
	while (str[i] != '\0')
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	if (k == 1)
		num = -num;
	return (num);
}

int		is_prime(int num)
{
	int i;

	i = 2;
	while (i < num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		add_prime_sum(int num)
{
	int i;
	int res;

	i = 2;
	res = 0;
	while (i <= num)
	{
		if (is_prime(i))
			res = res + i;
		i++;
	}
	ft_putnbr(res);
	return (0);
}

int		main(int args, char **argv)
{
	

	if ((atoi(argv[1]) < 2) || args != 2)
		write(1, "0\n", 2);
	else
	{
		add_prime_sum(atoi(argv[1]));
		write(1, "\n", 1);
	}
	return (0);
}