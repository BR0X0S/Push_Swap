/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 15:20:14 by oumondad          #+#    #+#             */
/*   Updated: 2024/04/05 00:36:16 by oumondad         ###   ########.fr       */
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
	data = check_all(data);
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

t_var	check_all(t_var data)
{
	long	x;
	long	i;

	i = 0;
	data.y = 0;
	while (data.split[data.y])
	{
		check_long(data.split[data.y]);
		x = ft_atoi(data.split[data.y]);
		i = data.y;
		while (data.split[i])
		{
			if (data.split[i + 1] == NULL)
				break ;
			if (x == ft_atoi(data.split[i + 1]))
				ft_error("Error");
			i++;
		}
		data.y++;
	}
	return (data);
}

t_var	array_to_stack(t_list **stack_a, t_var data)
{
	int	i;

	i = 0;
	data.array = malloc(data.y);
	printf("data.y = %ld\n", data.y);
	printf("data.y = %ld\n", data.y);
	while (i < data.y)
	{
		ft_lstadd_back(stack_a, ft_lstnew(ft_atoi(data.split[i])));
		data.array[i] = ft_atoi(data.split[i]);
		i++;
	}
	return (data);
}
