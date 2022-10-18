# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: admansar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/10 18:33:04 by admansar          #+#    #+#              #
#    Updated: 2022/10/17 23:24:38 by admansar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

CC = gcc

SRC = $(wildcard *.c)

OBJ = $(SRC:.c=.o)


all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)

just_do_it :
	$(CC) -o $(OBJ) -c $(SRC) $(FLAGS)

clean : 
	clear
	@rm -r *.o
	@echo
	@echo "9*******************************6"
	@echo "| all *.o are not their anymore |"

fclean : clean
	@rm -r *.a
	@echo "| all *.c are not their either  |"
re : fclean
	@echo "| everything is done sir adnane |"
	@echo "6*******************************9"
	@echo
	@echo "--------------------------------see---------------------------------"
	@ls
	@echo "--------------------------------------------------------------------" 

