/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 12:46:18 by ple-              #+#    #+#             */
/*   Updated: 2022/06/30 21:29:38 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	int	z;

	z = 'z';
	while (z >= 'a')
	{
		ft_putchar(z);
		--z;
	}		
}