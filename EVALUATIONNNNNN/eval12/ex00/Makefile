# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ple- <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/14 00:20:57 by ple-              #+#    #+#              #
#    Updated: 2022/07/14 00:30:25 by ple-             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ft_display_file.c

all: $(NAME)

$(NAME):
		gcc -c -Wall -Werror -Wextra $(SRC)
		gcc -o $(NAME) ft_display_file.o

clean:
		/bin/rm -f ft_display_file.o

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
