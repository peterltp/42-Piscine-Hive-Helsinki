#include "ft_list.h"
#include<stdio.h>

t_list	*ft_create_elem(void *data);
void	ft_list_push_back(t_list **begin_list, void *data);

void	print_list(t_list *begin_list)
{
	t_list	*list;

	list = begin_list;
	while (list)
	{
		printf("%s", list -> data);
		list = list -> next;
	}
	printf("\n");
}

int	main(void)
{
	t_list *list;

	list = ft_create_elem("wohoooo\n");
	ft_list_push_back(&list, "c\n");
	print_list(list);
	return (0);
}
