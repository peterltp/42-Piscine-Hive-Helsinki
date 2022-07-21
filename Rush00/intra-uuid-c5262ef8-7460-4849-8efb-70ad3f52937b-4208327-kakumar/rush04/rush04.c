/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakumar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 17:03:40 by kakumar           #+#    #+#             */
/*   Updated: 2022/07/03 17:05:12 by kakumar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	linefunc(int x, int char1, int char2, int char3)
{
	int	c;

	c = 1;
	if (x == 1)
		ft_putchar(char1);
	if (x == 2)
	{
		ft_putchar(char1);
		ft_putchar(char3);
	}
	if (x >= 3)
	{
		ft_putchar(char1);
		while (c <= x - 2)
		{
			ft_putchar(char2);
			c++;
		}
		ft_putchar(char3);
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (y >= 1 && x >= 1)
	{
		linefunc(x, 'A', 'B', 'C');
		ft_putchar('\n');
	}
	while (i < y - 2 && x >= 1)
	{
		linefunc(x, 'B', ' ', 'B');
		ft_putchar('\n');
		i++;
	}
	if (y >= 2 && x >= 1)
	{
		linefunc(x, 'C', 'B', 'A');
		ft_putchar('\n');
	}
}
