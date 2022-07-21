/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getmap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 23:56:40 by ple-              #+#    #+#             */
/*   Updated: 2022/07/20 10:57:10 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<bsq.h>

int	checknumber(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);

}

char	argument(char **argv)
{
	int	i;
	int	fd;
	char	buf[1];
	char	*str;

	i = 0;
	str = malloc (100 * sizeof(char));
	if (str == NULL)
		exit (0);
	fd = open(argv, O_RDONLY);
	while (buf[0] != '\n')
	{
		if (read(fd, buf, 1) <= 0)
			return (0);
		if (i > 0 && buf[0] == 0)
			return (0);
		str[i] = buf[0];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int		size(char *str)
{
	int	i;
	int	n;
	char	*get_size;

	i = 0;
	n = 0;
	get_size = malloc (sizeof(char) * 10);
	if (get_size == NULL)
	{
		exit (0);
	}	
	while (checknumber(str[i]))
	{
		get_size[n] = str[i];
		n++;
		i++;
	}
	return (ft_atoi(get_size));
}

char	*get_character(char *str)
{
	int	i;
	int	n;
	char	*get_character;

	i = 0;
	n = 0;
	get_character = malloc (sizeof(char) * 3);
	if (get_character == NULL)
		exit (0);
	while (str[i])
	{
		while (checknumber(str[i]))
		{
			i++;
		}
		get_character[n] = str[i];
		n++;
		i++;
	}
	get_character[n] = '\0';
	return (get_character);
}

