/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 15:33:00 by ple-              #+#    #+#             */
/*   Updated: 2022/07/19 21:40:36 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<fcntl.h>

int	check_valid_map(char **argv);

void	ft_putstr(char *str);

void	map_received(void);

int	main(int argc, char **argv)
{
	/*
	int	i;

	i = 1;
	if (argc == 1)
	{
		map_received();
		argv[0] = "map";
		if (check_valid_map(argv[0]) == 1)
		{
			write (2, "map error\n", 11);
		}
	}
	while (i < argc)
	{
		if (i > 1)
		{
			ft_putchar('\n');
		}
		if (check_valid_map(argv[0]) == 1)
		{
			write (2, "map error\n", 11);
		}
		i++;
	}
	*/
	map_received();
	
		

	return (0);
}
