/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 19:56:09 by ple-              #+#    #+#             */
/*   Updated: 2022/07/06 20:21:04 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}	
}

int	main(int argc, char **argv)
{
	int	c;

	c = argc - 1;
	while (c > 0)
	{	
		ft_putstr(argv[c]);
		ft_putchar('\n');
		c--;
	}
	return (0);
}
