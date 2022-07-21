/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:28:46 by ple-              #+#    #+#             */
/*   Updated: 2022/07/18 14:09:40 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	negative;

	i = 0;
	nb = 0;
	negative = 0;
	while (str[i] == ' ' && str[i] == '\v' && str[i] == '\n' && str[i] == '\t'
		&& str[i] == '\f' && str[i] == '\r')
		i++;
	if (str[i] == '-')
		negative = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= 48 && str[i] <= 57 && str[i] != '\0')
	{
		nb *= 10;
		nb += ((int)str[i] - 48);
		i++;
	}
	if (negative == 1)
		return (-nb);
	else
		return (nb);
}
