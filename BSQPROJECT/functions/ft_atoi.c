/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:29:19 by ple-              #+#    #+#             */
/*   Updated: 2022/07/20 16:44:47 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function.h"

int	ft_atoi(char *str)
{
	int	i;
	int	negative;
	int	answer;

	i = 0;
	negative = 0;
	answer = 0;
	while (str[i] == ' ' && str[i] == '\v' && str[i] == '\n' && str[i] == '\t'
		&& str[i] == '\f' && str[i] == '\r')
		i++;
	if (str[i] == '-')
		negative = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		answer *= 10;
		answer += (int)str[i] - 48;
		i++;
	}
	if (negative == 1)
		return (answer = -answer);
	else
		return (answer);
}
