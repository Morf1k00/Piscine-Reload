# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkrechun <rkrechun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/09 13:58:46 by rkrechun          #+#    #+#              #
#    Updated: 2023/11/10 17:42:05 by rkrechun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = ft_display_file.c
FLAGS = -Wall -Wextra -Werror


all: $(NAME)

$(NAME): $(SRC)
		gcc $(FLAGS) -o $(NAME) $(SRC) 

clean:
		rm -f ft_display_file.o

fclean: clean 
		rm -f $(NAME)
