/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrotates.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 20:25:32 by oumondad          #+#    #+#             */
/*   Updated: 2024/04/18 12:29:57 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_before_last(t_list *lst)
{
	while (lst->next -> next)
		lst = lst->next;
	return (lst);
}

void	revers_rotate_a(t_list **stack_a, int flag)
{
	t_list	*last_node;
	t_list	*bfr_last;

	if (lstsize(*stack_a) < 2)
		return ;
	last_node = ft_lstlast(*stack_a);
	bfr_last = ft_before_last(*stack_a);
	last_node ->next = *stack_a;
	*stack_a = last_node;
	bfr_last ->next = NULL;
	if (flag)
		write(1, "rra\n", 4);
}

void	revers_rotate_b(t_list **stack_b, int flag)
{
	t_list	*last_node;
	t_list	*bfr_last;

	if (lstsize(*stack_b) < 2)
		return ;
	last_node = ft_lstlast(*stack_b);
	bfr_last = ft_before_last(*stack_b);
	last_node ->next = *stack_b;
	*stack_b = last_node;
	bfr_last ->next = NULL;
	if (flag)
		write(1, "rrb\n", 4);
}

void	rrr(t_list **stack_a, t_list **stack_b, int flag)
{
	revers_rotate_a(stack_a, 0);
	revers_rotate_b(stack_b, 0);
	if ((flag && lstsize(*stack_b) >= 2) || (flag && lstsize(*stack_b) >= 2))
		write(1, "rrr\n", 3);
}

int	get_min_pos(t_list *stack)
{
	int	i;
	int	j;
	int	value;

	i = 0;
	j = 0;
	value = stack->content;
	while (stack->next)
	{
		if (value > stack->next->content)
		{
			value = stack->next->content;
			j = i + 1;
		}
		stack = stack->next;
		i++;
	}
	return (j);
}
