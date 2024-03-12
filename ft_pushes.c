/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushes.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 14:28:07 by oumondad          #+#    #+#             */
/*   Updated: 2024/03/11 21:44:28 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_list **stack_a, t_list **stack_b, int flag)
{
	t_list	*tmp;

	if (!stack_b || !*stack_b)
		return ;
	tmp = (*stack_b)-> next;
	if ((*stack_b)-> next != NULL)
		(*stack_b)-> next = NULL;
	ft_lstadd_front(stack_a, *stack_b);
	(*stack_b) = tmp;
	if (flag)
		write(1, "pa\n", 3);
}

void	push_b(t_list **stack_a, t_list **stack_b, int flag)
{
	t_list	*tmp;

	if (!stack_a || !*stack_a)
		return ;
	tmp = (*stack_a)-> next;
	if ((*stack_a)-> next != NULL)
		(*stack_a)-> next = NULL;
	ft_lstadd_front(stack_b, *stack_a);
	(*stack_a) = tmp;
	if (flag)
		write(1, "pb\n", 3);
}

void	swap_a(t_list **stack_a, int flag)
{
	t_list *tmp;
	t_list *tmp2;
	t_list *tmp3;

	if (ft_lstsize(*stack_a) < 2)
		return ;
	tmp =  *stack_a;
	tmp2 = (*stack_a)->next;
	tmp3 = tmp2->next;
	*stack_a = tmp2;
	tmp2->next = tmp;
	tmp->next = tmp3;
	if (flag)
		write(1, "sa\n", 3);
}

void	swap_b(t_list **stack_b, int flag)
{
	t_list *tmp;
	t_list *tmp2;
	t_list *tmp3;

	if (ft_lstsize(*stack_b) < 2)
		return ;
	tmp =  *stack_b;
	tmp2 = (*stack_b)->next;
	tmp3 = tmp2->next;
	*stack_b = tmp2;
	tmp2->next = tmp;
	tmp->next = tmp3;
	if (flag)
		write(1, "sb\n", 3);
}

void	swap_s(t_list **stack_a, t_list **stack_b, int flag)
{
	swap_a(stack_a, 0);
	swap_b(stack_b, 0);
	if (flag && ft_lstsize(*stack_b) >= 2 && ft_lstsize(*stack_b) >= 2)
		write(1, "ss\n", 3);
}
