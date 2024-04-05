/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alassiqu_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 23:51:36 by oumondad          #+#    #+#             */
/*   Updated: 2024/04/05 00:34:56 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_rang(t_var data)
{
	if (data.y <= 16)
		return (3);
	if (data.y <= 100)
		return (13);
	if (data.y <= 500)
		return (30);
	if (data.y > 500)
		return (45);
	return 0;
}

void	check_swap(t_list **stack)
{
	if (lstsize(*stack) >= 2)
	{
		if ((*stack)->content < (*stack)->next->content)
			swap_b(stack, 1);
	}
}

void	full_sort(t_var data, t_list **stack_a, t_list **stack_b)
{
	int	r;
	int	i;

	i = -1;
	r = get_rang(data);
	while (++i < data.y)
		printf("arr[%d] = %d\n", i, data.array[i]);
	while (1)
	{
		printf("arr[%d] = %d\n", i, data.array[i]);
		i++;
	}
		
	i = 0;
	while (*stack_a)
	{
		printf("arr[0] => %d, arr[fin] => %d\n", data.array[i], data.array[r + i]);
		if ((*stack_a)->content > data.array[i] && (*stack_a)->content <= data.array[r + 1])
		{
			push_b(stack_a, stack_b, 1);
			check_swap(stack_b);
			i++;
		}
		else if ((*stack_a)->content <= data.array[i])
		{
			push_b(stack_a, stack_b, 1);
			rotate_b(stack_b, 1);
			i++;
		}
		else
		{
			rotate_a(stack_a, 1);
		}
	}	
}
