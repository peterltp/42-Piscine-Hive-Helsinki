/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:19:15 by ple-              #+#    #+#             */
/*   Updated: 2022/07/13 11:00:38 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_count_if(char **tab, int (*f)(char*));

int	fc(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] == 'a')
		
			return (1);
		i++;	
	}
	return (0);
}


int	main(int argc, char **argv)
{
	argc = 0;

	printf("%d", ft_count_if(argv, &fc));
	return (0);



}
