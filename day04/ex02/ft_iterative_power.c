/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 23:33:13 by ple-              #+#    #+#             */
/*   Updated: 2022/07/02 23:46:33 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	answer;
	int	i;

	answer = nb;
	i = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power)
	{
		answer *= nb;
		i++;
	}
	return (answer);
}

int main()

{
printf("%d",	ft_iterative_power(2,4));
	return (0);


}

