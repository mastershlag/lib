# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pharatyk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 16:34:32 by pharatyk          #+#    #+#              #
#    Updated: 2018/11/06 16:34:34 by pharatyk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ./et1/*.c ./et2/*.c ./etbonus/*.c
HEADER = .
FLAGS = -Wall -Wextra -Werror
OPTION = -c -I $(HEADER)
OBJ = *.o

all: $(NAME) clean

$(NAME):
		gcc $(FLAGS) $(OPTION) $(SRCS)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)
clean:
		rm -f $(OBJ)
fclean: clean
		rm -f $(NAME)
re: fclean all
