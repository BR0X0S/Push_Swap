# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/26 16:12:26 by oumondad          #+#    #+#              #
#    Updated: 2024/05/19 17:10:30 by oumondad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

BNAME = checker

SRC = ft_split.c mini_libft.c parsing.c lists.c push_swap.c ft_pushes.c ft_rotates.c ft_rrotates.c \
	start_sort.c full_sort.c 

BSRC = ft_split.c mini_libft.c parsing.c lists.c checker_bonus.c ft_pushes.c ft_rotates.c ft_rrotates.c \
	get_next_line_bonus.c get_next_line_utils_bonus.c 

OBJ = ${SRC:.c=.o}

BOBJ = ${BSRC:.c=.o}

CFLAGS = -Wall -Wextra -Werror

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