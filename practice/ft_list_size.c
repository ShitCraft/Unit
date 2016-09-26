#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

int		ft_list_size(t_list *begin_list)
{
	int i;

	i = 0;
	while (begin_list->next != NULL)
	{
		i++;
		begin_list = begin_list->next;
	}
	return (i);
}

t_list	*create_elem(int data)
{
	t_list *list;

	list->next = NULL;
	list->data = data;
	return (list);
}

int		main(void)
{
	t_list *list;

	list = create_elem(10);
	list->next = create_elem(20);
	printf("%i\n", ft_list_size(list));
	return (0);
}