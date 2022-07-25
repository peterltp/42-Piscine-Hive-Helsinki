/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   result.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 14:41:12 by jcampell          #+#    #+#             */
/*   Updated: 2022/07/16 17:19:29 by jcampell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
		ft_putchar(*str++);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * (-1));
	}
	else
	{
		if (nb >= 10)
			ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
}

void	print_rush(int rush, int count)
{
	if (count > 0)
		ft_putstr(" || ");
	ft_putstr("[rush-0");
	ft_putnbr(rush);
	ft_putstr("] ");
	ft_putchar('[');
	ft_putnbr(g_width);
	ft_putstr("] ");
	ft_putchar('[');
	ft_putnbr(g_height);
	ft_putchar(']');
}

void	print_result(void)
{
	int	count;

	count = 0;
	if (g_rush[0] == 0)
		print_rush(0, count++);
	if (g_rush[1] == 0)
		print_rush(1, count++);
	if (g_rush[2] == 0)
		print_rush(2, count++);
	if (g_rush[3] == 0)
		print_rush(3, count++);
	if (g_rush[4] == 0)
		print_rush(4, count++);
	if (count == 0)
		ft_putstr("none");
	ft_putchar('\n');
}
