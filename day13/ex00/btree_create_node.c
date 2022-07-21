/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 21:13:02 by ple-              #+#    #+#             */
/*   Updated: 2022/07/15 21:36:27 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*btree;

	btree = NULL;
	btree = malloc (sizeof(t_btree));
	if (btree)
	{
		btree -> left = 0;
		btree -> right = 0;
		btree -> item = item;
	}
	return (btree);
}
