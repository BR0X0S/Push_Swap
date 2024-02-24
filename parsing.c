/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 15:20:14 by oumondad          #+#    #+#             */
/*   Updated: 2024/02/24 16:18:25 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_error(char *str)
{
	write(1, str, ft_strlen(str));
	exit(1);
}

int	ft_atoi(char *str)
{
	t_var data;

	data.i = 0;
	
	while(str[data.j])
	{
		if (!(str[data.j] >= '0' && str[data.j] <= '9'))
			ft_error("Non nbr detected");
		j++;
	}
}