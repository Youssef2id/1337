# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysalahed <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/04 19:10:38 by ysalahed          #+#    #+#              #
#    Updated: 2018/10/04 19:11:16 by ysalahed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
			srcs/ft_strlen.c srcs/ft_swap.c

OUT = ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

INCLUDES = includes/

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c ./srcs/ft_*.c -I $(INCLUDES)
	ar rc $(NAME) $(OUT)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OUT)

fclean:	clean
	/bin/rm -f $(NAME)

re: fclean all