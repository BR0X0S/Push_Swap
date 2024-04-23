/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 16:57:25 by oumondad          #+#    #+#             */
/*   Updated: 2024/04/21 12:13:59 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_var	data;
	t_list	*stack_a;
	t_list	*stack_b;
	int		i;

	i = 0;
	if (ac < 2)
		return (0);
	stack_a = NULL;
	stack_b = NULL;
	data = put_on_it(av);
	data = array_to_stack(&stack_a, data);
	if (!check_if_sort(stack_a))
		return (0);
	data = bubble_sort(data);
	start_sort(data, &stack_a, &stack_b);
	exit (0);
}
