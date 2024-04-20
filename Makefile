# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/26 16:12:26 by oumondad          #+#    #+#              #
#    Updated: 2024/04/19 23:46:12 by oumondad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

BNAME = checker

SRC = ft_split.c mini_libft.c parsing.c lists.c push_swap.c ft_pushes.c ft_rotates.c ft_rrotates.c \
	start_sort.c alassiqu_sort.c 

BSRC = ft_split.c mini_libft.c parsing.c lists.c push_swap_bonus.c ft_pushes.c ft_rotates.c ft_rrotates.c \
	get_next_line.c get_next_line_utils.c 

OBJ = ${SRC:.c=.o}

BOBJ = ${BSRC:.c=.o}

CFLAGS = -Wall -Wextra -Werror #-fsanitize=address -g3

CC = cc

all : ${NAME}

bonus : ${BNAME}

${NAME} : ${OBJ}
	${CC} ${CFLAGS} ${OBJ} -o ${NAME}

${BNAME} : ${BOBJ}
	${CC} ${CFLAGS} ${BOBJ} -o ${BNAME}

clean :
	rm -rf ${OBJ} ${BOBJ}

fclean : clean
	rm -rf ${NAME} ${BNAME}

re : fclean all bonus

.PHONY : re all clean fclean

.SECONDARY: $(OBJ) $(BOBJ)