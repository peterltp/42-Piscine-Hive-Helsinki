/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:58:01 by ple-              #+#    #+#             */
/*   Updated: 2022/07/20 16:02:02 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function.h"

char	*ft_strncat(char *dest, char *src, int count)
{
	int	i;
	int	leng;

	i = 0;
	leng = 0;
	while (dest[leng] != '\0')
	{
		leng++;
	}
	while (i < count && str[i] != '\0')
	{
		dest[leng + i] = str[i];
		i++;
	}
	dest[leng + 1] = '\0';
	return (dest);
}
