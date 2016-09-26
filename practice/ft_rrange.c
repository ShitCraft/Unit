#include <stdlib.h>
#include <stdio.h>

int		*ft_rrange(int start, int end)
{
	int *tab;
	int *tab_start;
	int i;

	i = 0;
	while ((start + 1) < end)
	{
		i++;
		start++;
	}
	tab = malloc(sizeof(int) * i);
	tab_start = tab;
	i = 0;
	while (start < end)
	{
		tab[i] = end;
		end--;
		i++;
	}
	return (tab_start);
}

void	ft_print_arr(int *arr, int length)
{
	int i;

	i = 0;
	while (length > 0)
	{
		printf("%i\n", arr[i]);
		i++;
		length--;
	}
}

int		main(void)
{
	ft_print_arr(ft_rrange(1, 3), 3);
	return (0);	
}