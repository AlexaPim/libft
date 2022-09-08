# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: coder <coder@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/05 17:13:30 by coder             #+#    #+#              #
#    Updated: 2022/09/06 17:14:17 by coder            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME: libft.a

all: $(NAME)

$(NAME):
	gcc -o $(NAME) 

FLAGS = -Wall\
		-Wextra\
		-Werror

SRC = ft_isalpha.c

OBJ = $(SRC:.c=*.o)

$(OBJ): $(SRC)
	gcc $(FLAGS) -c $(SRC)
ft_arquivos.o (arquivos compilados)

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all	

