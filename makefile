# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: allauren <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/06 00:46:43 by allauren          #+#    #+#              #
#    Updated: 2017/10/06 00:51:26 by allauren         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
PATH_SRC = ./src/
HEADER = 
FLAG = -Wall -Wextra -Werror
OPTION = 
SRC = *.c 

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(SRC)
clean:

fclean: clean
	rm -f a./out 
re: fclean all
