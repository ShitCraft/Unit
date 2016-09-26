/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oskrypka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 13:42:36 by oskrypka          #+#    #+#             */
/*   Updated: 2016/09/21 13:42:37 by oskrypka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	char c;
	int i;
	int j;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;
		i++;
		j--;
	}
	return (str);
}

int		main(void)
{
	char str[] = "string";

	ft_putstr(ft_strrev(str));
	return (0);
}