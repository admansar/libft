# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: admansar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/10 18:33:04 by admansar          #+#    #+#              #
#    Updated: 2022/10/21 23:22:10 by admansar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

CC = gcc

SRC = $(wildcard *.c)

OBJ = $(SRC:.c=.o)


all : $(NAME)

$(NAME) : compile
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)

compile :
	$(CC) -c $(SRC) $(FLAGS) 
bonus : all


clean : 
	@rm -r *.o
	@echo "| all *.o are not their anymore |"

fclean : clean
	@rm -r *.a
	@echo "| all *.c are not their either  |"
re : fclean all
