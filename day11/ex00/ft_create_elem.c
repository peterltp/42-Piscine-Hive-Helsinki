/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 23:37:00 by ple-              #+#    #+#             */
/*   Updated: 2022/07/13 15:51:46 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

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
