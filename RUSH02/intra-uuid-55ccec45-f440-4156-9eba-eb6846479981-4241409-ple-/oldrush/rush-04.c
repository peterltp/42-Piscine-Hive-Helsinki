/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 13:20:46 by ple-              #+#    #+#             */
/*   Updated: 2022/07/17 13:56:07 by ple-             ###   ########.fr       */
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
		print_rush('A', 'B', 'C', x);
		if (y > 2)
		{
			while (i < (y - 2))
			{
				print_rush('B', ' ', 'B', x);
				i++;
			}
		}
		if (y > 1)
		{
			print_rush('C', 'B', 'A', x);
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
