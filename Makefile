# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchemlal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/21 15:30:48 by mchemlal          #+#    #+#              #
#    Updated: 2024/12/21 15:30:56 by mchemlal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME= libftprintf.a

CC= cc

CFLAGS= -Wall -Wextra -Werror

SRC = ft_putchar.c ft_putstr.c ft_putnbr.c ft_unsigned_putnbr.c ft_puthex.c ft_putadr.c ft_printf.c

OBJ = $(SRC:.c=.o);

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "Library $(NAME) created."

%.o: %.c ft_printf.h
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled $<"

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@echo "Library $(NAME) removed."

re : fclean all

