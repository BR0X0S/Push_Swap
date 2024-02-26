/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 15:20:14 by oumondad          #+#    #+#             */
/*   Updated: 2024/02/26 17:46:06 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(char *str)
{
	write(2, str, ft_strlen(str));
	exit(1);
}

int main(int ac, char **av)
{
	(void)ac;
	t_var data;

	data.i = 1;
	while (av[data.i])
	{
		ft_check_str(av[data.i]);
		data.j = ft_atol(av[data.i]);
		printf("%d\n", data.j);
		data.i++;
	}
	return (0);
}
