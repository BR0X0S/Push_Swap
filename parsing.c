/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 15:20:14 by oumondad          #+#    #+#             */
/*   Updated: 2024/02/27 17:41:55 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(char *str)
{
	write(2, str, ft_strlen(str));
	exit(1);
}

t_var	ft_khchi_fchi(char **av)
{
	t_var	data;
	int		i;

	i = 1;
	data.args = NULL;
	while (av[i])
	{
		data.args = ft_strjoin(data.args, av[i]);
		i++;
	}
	data.split = ft_split(data.args, ' ');
	check_all(data);
	return (data);
}

void	check_long(char *str)
{
	int	o;
	int	i;

	o = 0;
	i = 0;
	while (str[o] == '0')
		o++;
	while (str[i])
		i++;
	if (i - o > 11)
		ft_error("Error");
}

void	check_all(t_var data)
{
	long	x;
	long	y;
	long	i;

	i = 0;
	y = 0;
	while (data.split[y])
	{
		check_long(data.split[y]);
		x = ft_atoi(data.split[y]);
		i = y;
		while (data.split[i])
		{
			if (data.split[i + 1] == NULL)
				break ;
			if (x == ft_atoi(data.split[i + 1]))
				ft_error("Error");
			i++;
		}
		y++;
	}
}

int	main(int ac, char **av)
{
	t_var	data;

	if (ac >= 2)
		data = ft_khchi_fchi(av);
	return (0);
}
