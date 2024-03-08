/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 16:57:25 by oumondad          #+#    #+#             */
/*   Updated: 2024/03/07 14:32:02 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_list *stack_a)
{
	while (stack_a)
	{
		printf("%d\n", (stack_a)->content);
		stack_a = (stack_a)->next;
	}
}

int	main(int ac, char **av)
{
	t_var	data;
	t_list	*stack_a;
	t_list	*stack_b;

	if (ac < 2)
		ft_error("error");
	stack_a = NULL;
	stack_b = NULL;
	data = ft_khchi_fchi(av);
	array_to_stack(&stack_a, data);
	print_stack(stack_a);
	return (0);
}
