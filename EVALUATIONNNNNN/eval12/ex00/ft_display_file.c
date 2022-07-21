/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 00:31:42 by ple-              #+#    #+#             */
/*   Updated: 2022/07/14 01:02:55 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<fcntl.h>
#include<unistd.h>

void	display_file(int file)
{
	char	text;

	while (read(file, &text, 1) != 0)
	{
		write (1, &text, 1);
	}
}

int	main(int argc, char **argv)
{
	int	text;

	if (argc != 2)
	{
		if (argc > 2)
		{
			write (2, "Too many arguments.\n", 20);
		}
		if (argc < 2)
		{
			write (2, "File name missing.\n", 19);
		}
		return (1);
	}
	text = open(argv[1], O_RDONLY);
	display_file(text);
	close(text);
	return (0);
}
