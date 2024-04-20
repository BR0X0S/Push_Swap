/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alassiqu_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 23:51:36 by oumondad          #+#    #+#             */
/*   Updated: 2024/04/18 21:02:37 by oumondad         ###   ########.fr       */
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
	return (0);
}

void	check_swap(t_list **stack)
{
	if (lstsize(*stack) >= 2)
	{
		if ((*stack)->content < (*stack)->next->content)
			swap_b(stack, 1);
	}
}

t_var	find_max(t_list *stack)
{
	int		i;
	t_var	data;

	i = 0;
	data.mpos = 0;
	data.max = (stack)->content;
	if (lstsize(stack) >= 2)
	{
		while ((stack)->next)
		{
			if (data.max < (stack)->next->content)
			{
				data.max = (stack)->next->content;
				data.mpos = i + 1;
			}
			i++;
			stack = (stack)->next;
		}
	}
	return (data);
}

void	last_sort(t_list **stack_a, t_list **stack_b, t_var data)
{
	data = find_max(*stack_b);
	if (data.mpos <= (lstsize(*stack_b) / 2))
	{
		while (data.max != (*stack_b)->content)
			rotate_b(stack_b, 1);
	}
	else
		while (data.max != (*stack_b)->content)
			revers_rotate_b(stack_b, 1);
	push_a(stack_a, stack_b, 1);
}

void	full_sort(t_var data, t_list **stack_a, t_list **stack_b)
{
	int	r;
	int	i;

	i = 0;
	r = get_rang(data);
	while (*stack_a)
	{
		if (r + i >= data.y)
			r = data.y - i - 1;
		else if ((*stack_a)->content > data.array[i]
			&& (*stack_a)->content <= data.array[r + i])
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
			check_revers(stack_a);
	}
}
