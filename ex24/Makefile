# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcomet <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/04 15:45:01 by mcomet            #+#    #+#              #
#    Updated: 2019/04/04 15:45:40 by mcomet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/ft_putchar.c	srcs/ft_putstr.c	srcs/ft_strcmp.c	srcs/ft_strlen.c	srcs/ft_swap.c

OBJ = ft_putchar.o		ft_putstr.o		ft_strcmp.o		ft_strlen.o		ft_swap.o

IDIR = includes

all: $(NAME)

$(NAME): 
		gcc -Wall -Wextra -Werror -c $(SRCS) -I $(IDIR)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

clean:	
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:		fclean all
