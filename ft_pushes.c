/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushes.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 14:28:07 by oumondad          #+#    #+#             */
/*   Updated: 2024/03/08 20:49:23 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	del_one(t_list *node)
{
	free (node);
}

void	push_a(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	tmp = (*stack_b)-> next;
	if ((*stack_b)-> next != NULL)
		(*stack_b)-> next = NULL;
	ft_lstadd_front(stack_a, *stack_b);
	(*stack_b) = tmp;
}

void	push_b(t_list **stack_a, t_list **stack_b)
{
	t_list	tmp;

	tmp = (*stack_a)-> next;
	if ((*stack_a)-> next != NULL)
		(*stack_a)-> next = NULL;
	ft_lstadd_front(stack_b, *stack_a);
	*stack_a = tmp;
}
