/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 23:01:47 by oumondad          #+#    #+#             */
/*   Updated: 2024/02/26 23:03:46 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_var
{
	int		i;
	int		j;
	int		sign;
	long	result;
	char	*args;
	char	**split;
}	t_var;

int		ft_atoi(char *str);
void	ft_error(char *str);
size_t	ft_strlen(char *str);
void	ft_check_str(char *str);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char *stack, char *buffer);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif