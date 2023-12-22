# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yregragu <yregragu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/21 17:50:18 by yregragu          #+#    #+#              #
#    Updated: 2023/12/22 19:03:03 by yregragu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c \
       ft_putchar.c \
       ft_putstr.c \
       ft_putnbr.c \
       ft_putnbr_base.c \

	   
OBJEC = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJEC)

.c.o :
	$(CC) $(CFLAGS) -c $<
	ar rcs $(NAME) $@

clean :
	rm -rf $(OBJEC)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean bonus re