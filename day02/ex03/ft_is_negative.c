/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 21:37:50 by ple-              #+#    #+#             */
/*   Updated: 2022/06/30 23:41:18 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	ft_is_negative(int n)
{	
	if (n < 0)
	{
		ft_putchar('N');

	}
	else
	{
		ft_putchar('P');
	}
}