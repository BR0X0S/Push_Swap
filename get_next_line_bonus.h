/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:40:12 by oumondad          #+#    #+#             */
/*   Updated: 2024/04/21 17:25:42 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

size_t	ft_strchr(char *str, char c);
char	*ft_strjoin(char *stack, char *buffer);
size_t	ft_strlen(char *str);
char	*ft_check(int i, char *buffer, char *stack);
char	*get_next_line(int fd);
void	ft_help(char *stack, char *tmp, int i);

#endif