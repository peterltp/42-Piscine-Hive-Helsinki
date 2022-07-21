/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   factorial1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:08:55 by ple-              #+#    #+#             */
/*   Updated: 2022/07/20 11:49:50 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	factorial(int a)
{
	int	result;

	result = 1;
	if (a < 0 || a > 12)
		return (0);
	if (a == 0)
		return (1);
	if (a > 0)
	{
		result = a * factorial(a - 1);
	}
	return (result);
}

int	main()
{
printf("%d\n",factorial(0));
printf("%d\n", factorial(1));
printf("%d\n", factorial(5));
printf("%d\n", factorial(13));

return (0);


}
