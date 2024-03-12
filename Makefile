# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/26 16:12:26 by oumondad          #+#    #+#              #
#    Updated: 2024/03/12 20:57:40 by oumondad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = ft_split.c mini_libft.c parsing.c lists.c push_swap.c ft_pushes.c ft_rotates.c ft_rrotates.c

OBJ = ${SRC:.c=.o}

CFLAGS = -Wall -Wextra -Werror #-fsanitize=address -g3

CC = cc

all : ${NAME}

${NAME} : ${OBJ}
	${CC} ${CFLAGS} -fsanitize=address -g3 ${OBJ} -o ${NAME}

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

re : fclean all

.PHONY : re all clean fclean

.SECONDARY: $(OBJ)