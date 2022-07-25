/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 10:57:37 by ple-              #+#    #+#             */
/*   Updated: 2022/07/02 11:04:37 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void ft_ft(int *nbr);

int main()
{
	int* p;
	int i;

	i = 42;
	p = &i; // point the pointer to address of i, so pointer can has value of i
			// i can change
	ft_ft(p);	//call function ft_ft
	
	return (0);
}
