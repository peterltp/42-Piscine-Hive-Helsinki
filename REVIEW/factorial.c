/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   factorial.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:04:53 by ple-              #+#    #+#             */
/*   Updated: 2022/07/08 11:24:26 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
int	factorial(int a)
{
	int	i;
	int	result;

	i = 1;
	result = 1;

	if (a < 0 || a > 12 )
		return 0;
	if (a == 0)
		return 1;
	while (a > 0)
		result = a * factorial(a-1);
	return result;

}

int	main()
{
	
	printf("%d\n", factorial(5));
	return 0;
}
