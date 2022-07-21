/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:52:05 by ple-              #+#    #+#             */
/*   Updated: 2022/07/20 16:57:25 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

char	*ft_read_map(int fd, t_map_param *param);
int		**ft_map_process(char **grid, t_map_param *param);
int		**ft_square(int *map, t_map_param map_param);

#endif
