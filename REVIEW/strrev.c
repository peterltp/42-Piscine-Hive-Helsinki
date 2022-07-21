/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 00:24:15 by ple-              #+#    #+#             */
/*   Updated: 2022/07/21 23:34:45 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
char	*ft_strv(char *str)
{
	int	max;
	int	min;
	char	swap;

	max = 0;
	min = 0;
	while (str[max] != '\0')
	{
		max++;
	}
	max = max - 1;
	while (min < max)
	{
		swap = str[min];
		str[min] = str[max];
		str[max] = swap;
		max--;
		min++;
	}
	return (str);
}

int	main()
{
	str[] = "hello";
	printf("%s\n", ft_strv(str));
	return (0);



}
