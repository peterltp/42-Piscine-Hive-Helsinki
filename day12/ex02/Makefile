# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ple- <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/14 16:38:39 by ple-              #+#    #+#              #
#    Updated: 2022/07/14 17:26:01 by ple-             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	ft_tail

SRC =	ft_tail.c

all: $(NAME)

$(NAME):
			gcc -c -Wall -Werror -Wextra $(SRC)
			gcc -o $(NAME) ft_tail.o

clean:
			/bin/rm -f ft_tail.o

fclean:
			/bin/rm -f $(NAME)

re:			fclean all
