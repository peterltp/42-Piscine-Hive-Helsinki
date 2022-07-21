/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 21:25:54 by ple-              #+#    #+#             */
/*   Updated: 2022/07/05 00:04:26 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	long int	number;

	number = nb;
	if (number < 0)
	{
		number = -nb;
		ft_putchar('-');
	}
	if (number <= 9)
	{
		ft_putchar(number + 48);
	}
	if (number >= 10)
	{	
		ft_putnbr(number / 10);
		ft_putchar((number % 10) + 48);
	}
}
