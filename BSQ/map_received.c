/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_received.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:17:25 by ple-              #+#    #+#             */
/*   Updated: 2022/07/19 21:51:20 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<fcntl.h>
//open and assign it to "map"
//then use it in int main(int argc, char **argv) argv[0] = "map"
void	map_received(void)
{
	int		r;
	int		fd;
	char	buf[4096];

	fd = open("map", O_CREAT | O_RDWR | O_TRUNC, S_IWUSR | S_IRUSR);
	r = read(0, buf, 4096);	
	write (fd, buf, r);
	close(fd);
}
