/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 22:13:07 by ple-              #+#    #+#             */
/*   Updated: 2022/07/03 11:52:41 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	factor;
	int	i;

	i = 1;
	factor = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	else
	{
		while (i <= nb)
		{
			factor *= i;
			i++;
		}
	}
	return (factor);
}

int main()
{
printf("%d",	ft_iterative_factorial(4));
return (0);

}
