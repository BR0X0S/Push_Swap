/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 15:41:34 by oumondad          #+#    #+#             */
/*   Updated: 2024/02/26 17:47:36 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_var
{
    int i;
    int j;
    int sign;
    long result;
}   t_var;

long	ft_atol(char *str);
void	ft_error(char *str);
size_t	ft_strlen(char *str);
void	ft_check_str(char *str);
char	*ft_strjoin(char *stack, char *buffer);
char	*ft_substr(char const *s, unsigned int start, size_t len);


#endif