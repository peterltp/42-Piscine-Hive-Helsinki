/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 19:17:52 by ple-              #+#    #+#             */
/*   Updated: 2022/07/07 23:28:44 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	counter;
	int	len;

	counter = 0;
	len = max - min - 1;
	if (min >= max)
	{
		return (NULL);
	}
	range = (int *) malloc (sizeof (*range) * len);
	while (min < max)
	{
		range[counter] = min;
		min++;
		counter++;
	}
	return (range);
}
