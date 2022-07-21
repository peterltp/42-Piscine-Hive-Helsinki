/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 00:30:51 by ple-              #+#    #+#             */
/*   Updated: 2022/07/07 16:18:57 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char *str)
{	
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*copi;
	int		i;

	i = 0;
	copi = (char *) malloc (sizeof (char) * ft_strlen(src) + 1);
	while (src[i] != '\0')
	{
		copi[i] = src[i];
		i++;
	}
	copi[i] = '\0';
	return (copi);
}
