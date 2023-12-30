# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bautret <bautret@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/15 16:42:35 by bautret           #+#    #+#              #
#    Updated: 2023/10/15 16:51:57 by bautret          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

CC = gcc

FLAG = -Wall -Wextra -Werror

SOURCES = main.c \
		ft_atoi.c \
		ft_get_number_in_line.c \
		ft_get_str_in_line.c \
		ft_print.c \
		ft_putstr.c \
		ft_strdup.c \
		get_bigger_than_100.c \
		get_decimal.c \
		functions.c \
		exceptions.c

OBJECTS = $(SOURCES:.c=.o)

$(NAME): $(OBJECTS) 
	$(CC) $(FLAGS) $(OBJECTS) -o $(NAME)

%.o : %.c
	@$(CC) $(FLAGS) -c $< -o $@
clean :
	rm -f $(OBJECTS)

fclean : clean
	rm -f $(NAME)

re : fclean all
