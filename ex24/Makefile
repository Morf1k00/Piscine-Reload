# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkrechun <rkrechun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 19:35:02 by rkrechun          #+#    #+#              #
#    Updated: 2023/11/10 16:24:01 by rkrechun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
HEADER = ./includes/
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
		gcc  $(FLAGS) -c $(SRC) -I $(HEADER)
		ar rc $(NAME) *.o

clean:
		rm -f *.c

fclean:	clean
		rm -f $(NAME)
		rm -f includes/*.*.gch

re:	fclean all
