/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 23:23:29 by ple-              #+#    #+#             */
/*   Updated: 2022/07/14 00:12:16 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*list;

	list = NULL;
	list = malloc (sizeof(t_list));
	if (list)
	{
		list -> data = data;
		list -> next = NULL;
	}
	return (list);
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*list;

	if (*begin_list)
	{
		list = ft_create_elem(data);
		list -> next = *begin_list;
		*begin_list = list;
	}
	else
		*begin_list = ft_create_elem(data);
}
