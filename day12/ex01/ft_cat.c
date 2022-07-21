 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 10:47:30 by ple-              #+#    #+#             */
/*   Updated: 2022/07/14 23:07:59 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<fcntl.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (2, &str[i], 1);
		i++;
	}
}

void	display(int argc, char **argv)
{
	char	buf;
	int		text;
	int		i;

	i = 1;
	while (i < argc)
	{
		text = open(argv[i], O_RDONLY);
		if (text >= 0)
		{
			while (read(text, &buf, 1) != 0)
			{
				write (1, &buf, 1);
			}
		}
		else
		{
			ft_putstr("ft_cat: ");
			ft_putstr(argv[i]);
			ft_putstr(": No such file or directory\n");
		}
		close(text);
		i++;
	}
}

void	print_echo(void)
{
	char	buf;

	while (read(0, &buf, 1) != 0)
	{
		write (1, &buf, 1);
	}
}

int	main(int argc, char **argv)
{
    if (argc < 2 || argv[1][1] == '-')
	{
		print_echo();
	}
	display(argc, argv);
	return (0);
}
