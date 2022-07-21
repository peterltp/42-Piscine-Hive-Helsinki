/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 23:03:39 by ple-              #+#    #+#             */
/*   Updated: 2022/07/03 11:55:32 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<unistd.h>

int	ft_recursive_factorial(int nb)
{
	int	factor;

	factor = 1;
	if (nb > 12 || nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 0)
	{	
		factor = nb * ft_recursive_factorial(nb - 1);
	}
	return (factor);
}

int main()
{
	printf("%d", ft_recursive_factorial(4));
	return (0);

}
