/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 18:14:48 by ple-              #+#    #+#             */
/*   Updated: 2022/07/08 21:52:04 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	lenstr(char *str)
{
	int i;
	int	len;

	len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
		len++;
	}
	str[i] = '\0';
	return (len);
}

void	ft_getstr(char *str)
{
	int	c;

	c = lenstr(str);
	while (str[c] != 0)
	{
		write (1, &str[c], 1);
		c--;
	}
	str[c] = '\0';
}

int	main(int argc, char **argv)
{	
	
	char c;


	
		
	ft_getstr(argv[1]);
	

	c = '\n';
	write (1, &c, 1);
	return (0);
}



