# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dchiche <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/23 02:57:18 by dchiche           #+#    #+#              #
#    Updated: 2017/07/26 21:30:38 by dchiche          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
FLAG = -Wall -Werror -Wextra
LIB = libft.a
SRC = ft_calc.c ft_op.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(SRC)
	gcc -c $(FLAG) $(SRC)
	gcc -o $(NAME) $(LIB) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean
	make
