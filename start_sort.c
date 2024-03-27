/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 23:16:18 by oumondad          #+#    #+#             */
/*   Updated: 2024/03/27 01:34:23 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_list **stack_a)
{
	if ((*stack_a)->content < (*stack_a)->next->content
		&& (*stack_a)->next->content > (*stack_a)->next->next->content
		&& (*stack_a)->content < (*stack_a)->next->next->content)
	{
		revers_rotate_a(stack_a, 1);
		swap_a(stack_a, 1);
	}
	else if ((*stack_a)->content > (*stack_a)->next->content
		&& (*stack_a)->next->content < (*stack_a)->next->next->content
		&& (*stack_a)->content < (*stack_a)->next->next->content)
		swap_a(stack_a, 1);
	else if ((*stack_a)->content < (*stack_a)->next->content
		&& (*stack_a)->content > (*stack_a)->next->next->content)
		revers_rotate_a(stack_a, 1);
	else if ((*stack_a)->content > (*stack_a)->next->content
		&& (*stack_a)->next->content > (*stack_a)->next->next->content)
	{
		rotate_a(stack_a, 1);
		swap_a(stack_a, 1);
	}
	else if ((*stack_a)->content > (*stack_a)->next->content
		&& (*stack_a)->content > (*stack_a)->next->next->content
		&& (*stack_a)->next->next->content > (*stack_a)->next->content)
		rotate_a(stack_a, 1);
	return ;
}

int	start_sort(t_var data, t_list **stack_a, t_list **stack_b)
{
	(void)stack_b;
	if (data.y == 1)
		return (0);
	else if (data.y == 2)
	{
		if ((*stack_a)->content > (*stack_a)->next->content)
			swap_a(stack_a, 1);
		return (0);
	}
	else if (data.y == 3)
	{
		if (!check_if_sort(*stack_a))
			return (0);
		sort_3(stack_a);
		return (0);
	}
	return (1);
}
