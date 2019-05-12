# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcomet <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/04 15:48:47 by mcomet            #+#    #+#              #
#    Updated: 2019/04/04 15:49:35 by mcomet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = ./ft_display_file.c
OBJ = ./ft_display_file.o

all:
		gcc -Wall -Wextra -Werror -c $(SRC) 
		gcc -Wall -Wextra -Werror $(OBJ) -o $(NAME)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all
