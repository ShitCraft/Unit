/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oskrypka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 11:50:58 by oskrypka          #+#    #+#             */
/*   Updated: 2016/09/20 11:50:59 by oskrypka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char *start;
	char *copy;
	int i;
	int j;

	j = 0;
	i = 0;
	start = src;
	while (*src != '\0')
	{
		i++;
		src++;
	}
	copy = malloc(sizeof(char) * i + 1);
	while (start[j] != '\0')
	{
		copy[j] = start[j];
		j++;
	}
	copy[j] = '\0';
	return (copy);
}

int		main(void)
{
	char *str;
	char c[] = "string";

	str = ft_strdup(c);
	printf("%s", str);
}