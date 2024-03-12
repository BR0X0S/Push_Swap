/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotates.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 19:35:55 by oumondad          #+#    #+#             */
/*   Updated: 2024/03/12 21:39:48 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_list **stack_a, int flag)
{
	t_list	*last_node;
	t_list	*tmp;

	if (lstsize(*stack_a) < 2)
		return ;
	last_node = ft_lstlast(*stack_a);
	tmp = (*stack_a)->next;
	(*stack_a)->next = NULL;
	last_node->next = *stack_a;
	*stack_a = tmp;
	if (flag)
		write(1, "ra\n", 3);
}

void	rotate_b(t_list **stack_b, int flag)
{
	t_list	*last_node;
	t_list	*tmp;

	if (lstsize(*stack_b) < 2)
		return ;
	last_node = ft_lstlast(*stack_b);
	tmp = (*stack_b)->next;
	(*stack_b)->next = NULL;
	last_node->next = *stack_b;
	*stack_b = tmp;
	if (flag)
		write(1, "rb\n", 3);
}

void	ra_rb(t_list **stack_a, t_list **stack_b, int flag)
{
	rotate_a(stack_a, 0);
	rotate_b(stack_b, 0);
	if ((flag && lstsize(*stack_a) >= 2) || (flag && lstsize(*stack_b) >= 2))
		write(1, "rr\n", 3);
}
