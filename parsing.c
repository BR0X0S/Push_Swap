/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 15:20:14 by oumondad          #+#    #+#             */
/*   Updated: 2024/02/24 22:19:51 by oumondad         ###   ########.fr       */
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
	write(2, str, ft_strlen(str));
	exit(1);
}

// void	ft_check(char *str)
// {
// 	t_var data;

// 	data.i = 1;
// 	while(str[data.i])
// 	{
// 		if (!(str[data.j] >= '0' && str[data.j] <= '9'))
// 			data.j++;
// 		data.i++;
// 	}
// 	if (data.j != 0)
// 		ft_error("Non nbr detected");
// }

long	ft_atol(char *str)
{
	t_var data;

	data.i = 0;
	data.sign = 1;
	data.result = 0;
	if (str[data.i] == '-' || str[data.i] == '+')
	{
		if (str[data.i] == '-')
			data.sign = -1;
		data.i++;
	}
	while ((str[data.i] >= '0' && str[data.i] <= '9'))
	{
		if (data.result * 10 > 2147483648 || data.result * 10 * data.sign < -2147483647)
			ft_error("Error");
		data.result = data.result * 10 + (str[data.i] - '0');
		data.i++;
	}
	if (str[data.i] || (str[data.i] < '0' && str[data.i] > '9'))
		ft_error("Error");
	if ((data.result * data.sign) > 2147483648 || (data.result * data.sign) < -21471483647)
		ft_error("Error");
	return (data.result * data.sign);
}

int main(int ac, char **av)
{
	(void)ac;
	t_var data;

	data.i = 1;
	while (av[data.i])
	{
		data.j = ft_atol(av[data.i]);
		printf("%d\n", data.j);
		data.i++;
	}
	// while (data.i < ac)
	// {
	// 	if (av[data.i][0] == ' ')
	// 		data.i++;
	// 	data.j = ft_atoi(av[data.i]);
	// 	printf("hana");
	// 	printf("%d\n", data.j);
	// 	data.i++;
	// }
	return (0);
}
