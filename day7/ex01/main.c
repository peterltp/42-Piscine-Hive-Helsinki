/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 23:16:02 by ple-              #+#    #+#             */
/*   Updated: 2022/07/07 23:28:48 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int *ft_range(int min, int max);

int main()
{
	int min = -100;
	int max = 10;

	while (min < max)
	{
		printf("%d", *ft_range(min, max));
		min++;
		printf("\n");
	}
	return (0);




}
