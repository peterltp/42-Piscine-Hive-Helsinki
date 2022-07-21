/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 23:36:27 by ple-              #+#    #+#             */
/*   Updated: 2022/07/05 16:25:30 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	i;
	int	result;

	result = 0;
	i = 0;
	sign = 0;
	while (str[i] == ' ' && str[i] == '\v' && str[i] == '\n' && str[i] == '\t' && str[i] == '\f' && str[i] == '\r')
		i++;
	if (str[i] == '-')
		sign = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10;
		result = result + ((int)str[i] - 48);
		i++;
	}
	if (sign == 1)
		return (result = -result);
	else
		return (result);
}
