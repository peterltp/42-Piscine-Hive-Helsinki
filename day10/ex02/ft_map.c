/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 00:51:59 by ple-              #+#    #+#             */
/*   Updated: 2022/07/12 21:13:21 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*result;

	i = 0;
	result = malloc (sizeof (int *) * length);
	while (i < length)
	{
		result[i] = f(tab[i]);
		i++;
	}
	return (result);
}
