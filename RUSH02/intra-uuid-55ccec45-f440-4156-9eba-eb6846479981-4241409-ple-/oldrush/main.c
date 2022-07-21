/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 13:43:53 by ple-              #+#    #+#             */
/*   Updated: 2022/07/17 13:51:03 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	rush(int x, int y);

int	col_atoi(char *str)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	if (*str == '-')
		b = 1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
			a = (a * 10) + (*str - '0');
		else
			str++;
	}
	return (a > 0 && b == 1);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		rush(col_atoi(argv[1]), col_atoi(argv[2]));
	return (0);
}
