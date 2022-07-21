/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:21:20 by jcampell          #+#    #+#             */
/*   Updated: 2022/07/16 17:01:06 by jcampell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# include <stdlib.h>
# include <unistd.h>

int		check_first(char first, char middle, char last, char *str);
int		check_last(char first, char middle, char last, char *str);
int		check_middle(char middle, char *str);
void	measure(char *str);
void	check(char *input);
void	print_result(void);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	*ft_memcpy(void *dst, void *src, unsigned int size);
char	*ft_realloc(char *ptr, unsigned int size);
void	print_result(void);

int		g_height;
int		g_width;
int		g_rush[5];

#endif
