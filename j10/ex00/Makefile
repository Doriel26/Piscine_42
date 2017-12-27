# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dchiche <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/23 02:57:18 by dchiche           #+#    #+#              #
#    Updated: 2017/07/26 17:03:34 by dchiche          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAG = -Wall -Werror -Wextra
SRC = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
OBJ = $(SRC:.c=.o)
SRCDIR = ./srcs/
INCLUDES = -I ./includes
SRCS = $(addprefix $(SRCDIR),$(SRC))

all: $(NAME)

comp:
	gcc -c $(FLAG) $(INCLUDES) $(SRCS)

$(NAME): comp
	ar rc $@ $(OBJ)
	ranlib $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean
	make
