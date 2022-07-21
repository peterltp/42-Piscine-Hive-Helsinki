# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ple- <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/14 10:45:37 by ple-              #+#    #+#              #
#    Updated: 2022/07/14 17:25:56 by ple-             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

SRC = ft_cat.c

all: $(NAME)

$(NAME):
		gcc -c -Wall -Werror -Wextra $(SRC)
		gcc -o $(NAME) ft_cat.o

clean:
		/bin/rm -f ft_cat.o

fclean:
		/bin/rm -f $(NAME)

re:	fclean all
