/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 21:19:56 by ple-              #+#    #+#             */
/*   Updated: 2022/07/15 21:36:29 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include "ft_btree.h"

t_btree	*btree_create_node(void *item);

int	main()
{
	t_btree *n1;
	t_btree *n2;

	n1 = btree_create_node("left");
	n2 = btree_create_node("right");
	printf("%s\n",n1 -> item);
	printf("%s\n",n2 -> item);


	return (0);



}
