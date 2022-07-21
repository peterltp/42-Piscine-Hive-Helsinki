/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 12:38:03 by ple-              #+#    #+#             */
/*   Updated: 2022/07/13 18:44:29 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include "ft_list.h"
#include<string.h>

t_list	*ft_create_elem(void *data);

int	main()
{
	t_list	*n1;

	n1 = ft_create_elem("Hello");
	printf("%s\n",n1->data);

	return (0);

}
