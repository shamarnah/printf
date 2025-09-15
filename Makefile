# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samarnah <samarnah@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/10 14:48:45 by samarnah          #+#    #+#              #
#    Updated: 2025/09/13 13:06:58 by samarnah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Werror -Wextra

SRC = ft_putchar.c ft_putstr.c ft_putnbr.c ft_hexalower.c ft_hexaupper.c ft_unsignedecimal.c ft_pointer.c ft_printf.c

OBJ = $(SRC:.c=.o)

NAME = libftprintf.a

all : $(NAME)
	
$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
