/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 23:16:18 by oumondad          #+#    #+#             */
/*   Updated: 2024/04/19 14:04:53 by oumondad         ###   ########.fr       */
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

void	push_min(t_list **stack_a, t_list **stack_b)
{
	int	x;

	x = get_min_pos(*stack_a);
	while (get_min_pos(*stack_a) != 0 && x >= 3)
		revers_rotate_a(stack_a, 1);
	while (get_min_pos(*stack_a) != 0)
		rotate_a(stack_a, 1);
	if (get_min_pos(*stack_a) == 0)
		push_b(stack_a, stack_b, 1);
}

void	sort_4_5(t_var data, t_list **stack_a, t_list **stack_b)
{
	if (data.y == 5)
		push_min(stack_a, stack_b);
	push_min(stack_a, stack_b);
	sort_3(stack_a);
	if (data.y == 5)
		push_a(stack_a, stack_b, 1);
	push_a(stack_a, stack_b, 1);
}

int	start_sort(t_var data, t_list **stack_a, t_list **stack_b)
{
	if (data.y == 1)
		return (0);
	else if (data.y == 2)
	{
		if ((*stack_a)->content > (*stack_a)->next->content)
			swap_a(stack_a, 1);
	}
	else if (data.y == 3)
	{
		if (!check_if_sort(*stack_a))
			return (0);
		sort_3(stack_a);
	}
	else if (data.y == 4 || data.y == 5)
		sort_4_5(data, stack_a, stack_b);
	else
	{
		full_sort(data, stack_a, stack_b);
		while (*stack_b)
			last_sort(stack_a, stack_b, data);
	}
	return (0);
}

void	check_revers(t_list **stack_a)
{
	t_list	*tmp;
	int		len;
	int		i;

	i = 0;
	tmp = *stack_a;
	len = lstsize(*stack_a);
	while ((tmp)->next)
	{
		if ((tmp)->content > (tmp)->next->content)
			i++;
		tmp = (tmp)->next;
	}
	i++;
	if (i == len)
		revers_rotate_a(stack_a, 1);
	else
		rotate_a(stack_a, 1);
}
