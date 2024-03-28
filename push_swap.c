/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 16:57:25 by oumondad          #+#    #+#             */
/*   Updated: 2024/03/28 23:47:09 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_list *stack_a, char c)
{
	printf("=---------------%c----------------=\n", c);
	while (stack_a)
	{
		printf("%d\n", (stack_a)->content);
		stack_a = (stack_a)->next;
	}
	printf("=---------------%c----------------=\n", c);
}

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
	data = ft_khchi_fchi(av);
	data = array_to_stack(&stack_a, data);
	if (check_if_sort(stack_a) == 0)
		return (0);
	print_stack(stack_a, 'A');
	start_sort(data, &stack_a, &stack_b);
	print_stack(stack_a, 'A');
	return (0);
}
