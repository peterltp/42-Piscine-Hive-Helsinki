/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:06:37 by ple-              #+#    #+#             */
/*   Updated: 2022/07/20 16:26:58 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function.h"

void	ft_putnbr(int nb)
{
	long	number;

	number = nb;
	if (number < 0)
	{
		ft_putchar('-');
		number = -number;
	}
	if (number <= 9)
	{
		ft_putchar(number + 48);
	}
	if (number >= 10)
	{
		ft_putnbr(number / 10);
		ft_putnbr(number % 10);
	}
}
