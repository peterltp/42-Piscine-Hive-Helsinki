/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_last_word_string_argv.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 22:12:58 by ple-              #+#    #+#             */
/*   Updated: 2022/07/20 23:40:00 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

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
	int	i;
	char *str;

	str = argv[1];
	i = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
	}
	else
	{
		while (*str > 0)
		{
			str++;
		}
		while (*str != ' ')
		{
			str--;
		}
		while (*str > 0)
		{
			ft_putchar(*str++);
		}
	}
	return (0);
}
