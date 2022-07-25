# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcampell <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/16 16:29:39 by jcampell          #+#    #+#              #
#    Updated: 2022/07/17 15:24:58 by ple-             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2
SRCS = ./srcs/
RM = /bin/rm -f

FUNCTS = main rush_check result memory
OPTIONS = -I includes
FLAGS = -Wall -Wextra -Werror

CFILES = $(patsubst %, $(SRCS)%.c, $(FUNCTS))
OBJECTS = $(patsubst %, %.o, $(FUNCTS))

.PHONY: all $(NQME) $(OBJECTS) clean fclean re

all: $(NAME)

$(OBJECTS):
	gcc $(OPTIONS) $(FLAGS) -c $(CFILES)

$(NAME): $(OBJECTS)
	gcc $(OPTIONS) $(FLAGS) $(OBJECTS) -o $(NAME)
	gcc $(OPTIONS) $(FLAG) ./oldrush/main.c ./oldrush/rush-00.c -o rush-00
	gcc $(OPTIONS) $(FLAG) ./oldrush/main.c ./oldrush/rush-01.c -o rush-01
	gcc $(OPTIONS) $(FLAG) ./oldrush/main.c ./oldrush/rush-02.c -o rush-02
	gcc $(OPTIONS) $(FLAG) ./oldrush/main.c ./oldrush/rush-03.c -o rush-03
	gcc $(OPTIONS) $(FLAG) ./oldrush/main.c ./oldrush/rush-04.c -o rush-04

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)
	$(RM) rush-00 rush-01 rush-02 rush-03 rush-04

re: fclean all
