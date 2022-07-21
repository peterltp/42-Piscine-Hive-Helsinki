/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 12:43:38 by ple-              #+#    #+#             */
/*   Updated: 2022/07/08 13:12:44 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
int	ft_atoi(char *str)
{
	int	i;
	int negative;
	int result;

	result = 0;
	negative = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\v' || str[i] == '\n' || str[i] == '\f' || str[i] == '\r')
	{
		i++;
	}

	if (str[i] == '-')
	{
		negative = 1;
	}

	if (str[i] == '-' && str[i] == '+')
	{
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10;
		result = result + ((int)str[i] - 48);
		i++;
	}
	if (negative == 1)
	{

	return(	result = -result);
	}
	else 

		return (result);
}

int	main()
{
	char str[] = "-32432";
	printf("the real atoi, %d\n", atoi(str));
	printf("fake atoi, %d\n", ft_atoi(str));
return (0);
}
