/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readmap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:30:14 by ple-              #+#    #+#             */
/*   Updated: 2022/07/20 20:01:49 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>
#include "function.h"
#include "map.h"
#define BUFF_SIZE 9000

char	**ft_read_input(int fd, char c)
{
	char	*buff;
	char	*temp;
	char	*input;
	int		leng;

	buff = malloc (sizeof(*buff));
	input = malloc (sizeof(*input));
	if (buff == NULL)
		return (0);
	if (input == NULL)
		return (0);
	input[0] = '\0';
	leng = 0;
	while (read(fd, buff, 1) > 0 && *buf != c)
	{
		leng++;
		temp = input;
		input = malloc (sizeof(*input) * (++leng + 1));
		if (input != '\0')
			return (0);
		input[0] = '\0';
		ft_strcat(input, temp);
		ft_strncat(input, buff, 1);
		free (temp);
	}
	input[leng] = '\0';
	return (input);
}

int	finish_map(t_map_param *map, char *param)
{
	int	i;
	int	leng;
	int	*line;

	leng = 0;
	while (param[leng] != '\0')
		leng++;
	line = (char *) malloc (sizeof (char) * (leng - 3 + 1));
	if (line == NULL)
		return (0);
	i = 0;
	while (param[i + 3] != '\0')
	{
		line[i] = param[i];
		i++;
	}
	line[i] = '\0';
	map->line = ft_atoi(line);
	map->empty = param[i++];
	map->obs = param[i++];
	map->full = param[i];
	return (1);
}

char	*ft_read_map(int fd, t_map_param *map)
{
	int		i;
	char	*temp;
	char	*str;

	finish_map(map, ft_read_input(fd, '\n'));
	temp = ft_read_input(fd, '\n');
	map->column = ft_strlen(temp) + 1;
	if (map->line <= 0)
		return (0);
	str = (char *) malloc (sizeof (*str) * (map->line * map->column));
	if (str == NULL)
		return (0);
	str[0] = '\0';
	ft_strcat(str, temp);
	str[map->column - 1] = '\n';
	str += map->column;
	i = read(fd, str, (map->line - 1) * map->column);
	if (i < 0)
		return (0);
	if (i != (map->line - 1) * map->column)
		return (0);
	str -= map->column;
	if (read(fd, temp, 1) > 0 || str[map->line * map->column - 1] != '\n')
		return (0);
	str[map->line * map->column - 1] = '\0';
	return (str);
}
