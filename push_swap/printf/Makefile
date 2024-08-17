# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: autku <autku@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/24 21:35:01 by autku             #+#    #+#              #
#    Updated: 2024/05/10 11:53:55 by autku            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_print_char.c ft_print_digit.c ft_print_udigit.c ft_printf.c ft_print_format.c ft_print_hexc.c ft_print_ptr.c ft_print_str.c

OBJS = $(SRC:.c=.o)

CFLAGS = -Wextra -Wall -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
