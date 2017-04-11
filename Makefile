# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gduron <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/19 20:14:23 by gduron            #+#    #+#              #
#*   Updated: 2017/04/04 02:21:32 by bduron           ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = test_libft

SRC = \
main.c \
part1.c \
part2.c \
bonus.c

CC = -Wall -Werror -Wextra

LIB = -L../libft -lft

OBJ = $(SRC:.c=.o)

HEADER = includes

VPATH = srcs/

all: $(NAME)

$(NAME): $(SRC)
	@gcc -o $(NAME) $^ $(CC) -I $(HEADER) $(LIB)
	@echo "Compilation:\033[92m OK\033[0m"

clean:
	@echo "Deleting:\033[33m *.o\033[0m"
	@rm -f *.o

fclean: clean
	@echo "Deleting:\033[33m $(NAME)"
	@rm -f $(NAME)

re: fclean all
