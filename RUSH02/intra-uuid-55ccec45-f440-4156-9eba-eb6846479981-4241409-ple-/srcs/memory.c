/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:56:55 by jcampell          #+#    #+#             */
/*   Updated: 2022/07/16 16:57:07 by jcampell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	*ft_memcpy(void *dst, void *src, unsigned int size)
{
	unsigned int	i;
	char			*s;
	char			*d;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	while (i < size)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

char	*ft_realloc(char *ptr, unsigned int size)
{
	char	*new;

	new = (char *)malloc(size);
	ft_memcpy(new, ptr, size / 2);
	free(ptr);
	return (new);
}
