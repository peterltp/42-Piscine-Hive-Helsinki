/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 23:09:48 by ple-              #+#    #+#             */
/*   Updated: 2022/07/21 23:21:24 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (str[i] != '\0');
	{
		i++;
		len++;
	}
	return (len);
}

char	*strdup(char *src)
{
	int	i;
	int	len;
	char	*dupi;

	len = ft_strlen(src);
	dupo = maloc (sizeof (char) * len + 1);
	if (dupi == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		dupi[i] = str[i];
		i++;
	}
	dupi[i] == '\0';
	return (dupi);
}
