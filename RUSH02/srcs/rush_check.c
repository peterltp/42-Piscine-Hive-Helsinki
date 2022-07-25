/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:57:39 by jcampell          #+#    #+#             */
/*   Updated: 2022/07/16 17:07:49 by jcampell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	check_first(char first, char middle, char last, char *str)
{
	int	i;
	int	result;

	result = 0;
	if (g_height > 0 && g_width > 0)
	{
		i = 0;
		while (i < g_width && str[i] != '\0')
		{
			if (i == 0)
				result += (str[i] != first);
			else if (g_width >= 2 && i == g_width -1)
				result += (str[i] != last);
			else
				result += (str[i] != middle);
			i++;
		}
		if (i != g_width)
			return (1);
	}
	return (result);
}

int	check_last(char first, char middle, char last, char *str)
{
	int	i;
	int	lines;

	i = 0;
	lines = i;
	if (g_height >= 2 && g_width > 0)
	{
		while (str[i] != '\0' && lines > g_height)
		{
			if (str[i] == '\n')
				lines++;
			i++;
		}
		if (lines == g_height)
			return (check_first(first, middle, last, &str[i]));
		else
			return (1);
	}
	return (0);
}

int	check_middle(char middle, char *str)
{
	int	i;
	int	result;
	int	lines;

	i = g_width + 1;
	result = 0;
	lines = 2;
	if (g_height >= 3 && g_width > 0)
	{
		while (str[i] != '\0' && lines < g_height)
		{
			if (i % (g_width + 1) == 0 || i % (g_width + 1) == g_width -1)
				result += (str[i] != middle);
			else if (str[i] == '\n')
				lines++;
			else
				result += (str[i] != ' ');
			i++;
		}
		return (result);
	}
	return (0);
}

void	measure(char *str)
{
	char	*start;

	start = str;
	while (*str != '\n' && *str)
	{
		g_width++;
		str++;
	}
	str = start;
	while (*str++)
		if (*str == '\n')
			g_height++;
}

void	check(char *input)
{
	g_rush[0] += check_first('o', '-', 'o', input);
	g_rush[0] += check_middle('|', input);
	g_rush[0] += check_last('o', '-', 'o', input);
	g_rush[1] += check_first('/', '*', '\\', input);
	g_rush[1] += check_middle('|', input);
	g_rush[1] += check_last('\\', '*', '/', input);
	g_rush[2] += check_first('A', 'B', 'A', input);
	g_rush[2] += check_middle('B', input);
	g_rush[2] += check_last('C', 'B', 'C', input);
	g_rush[3] += check_first('A', 'B', 'C', input);
	g_rush[3] += check_middle('B', input);
	g_rush[3] += check_last('A', 'B', 'C', input);
	g_rush[4] += check_first('A', 'B', 'C', input);
	g_rush[4] += check_middle('B', input);
	g_rush[4] += check_last('C', 'B', 'A', input);
}
