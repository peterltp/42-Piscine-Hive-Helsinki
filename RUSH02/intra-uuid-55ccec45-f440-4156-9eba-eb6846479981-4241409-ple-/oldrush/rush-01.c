/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 13:31:30 by ple-              #+#    #+#             */
/*   Updated: 2022/07/17 13:52:26 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	print_rush(char f, char m, char l, int z);

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x > 0 && y > 0)
	{
		print_rush('/', '*', '\\', x);
		if (y > 2)
		{
			while (i < (y - 2))
			{
				print_rush('*', ' ', '*', x);
				i++;
			}
		}
		if (y > 1)
		{
			print_rush('\\', '*', '/', x);
		}
	}
}

void	print_rush(char f, char m, char l, int z)
{
	int	i;

	i = 0;
	ft_putchar(f);
	while (i < (z - 2))
	{
		ft_putchar(m);
		i++;
	}
	if (z > 1)
	{
		ft_putchar(l);
	}
	ft_putchar('\n');
}
