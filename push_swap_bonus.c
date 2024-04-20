/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:34:16 by oumondad          #+#    #+#             */
/*   Updated: 2024/04/20 15:59:02 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strcmp(char *inst, char *str)
{
	int	i;

	i = 0;
	while (inst[i] || str[i])
	{
		if (inst[i] > str[i])
			return (1);
		else if (inst[i] < str[i])
			return (1);
		i++;
	}
	return (0);
}

void	check_and_apply(char *inst, t_list **stack_a, t_list **stack_b)
{
	if (!ft_strcmp(inst, "rra\n"))
		revers_rotate_a(stack_a, 0);
	else if (!ft_strcmp(inst, "rrb\n"))
		revers_rotate_b(stack_b, 0);
	else if (!ft_strcmp(inst, "rrr\n"))
		rrr(stack_a, stack_b, 0);
	else if (!ft_strcmp(inst, "sa\n"))
		swap_a(stack_a, 0);
	else if (!ft_strcmp(inst, "sb\n"))
		swap_b(stack_b, 0);
	else if (!ft_strcmp(inst, "ss\n"))
		swap_s(stack_a, stack_b, 0);
	else if (!ft_strcmp(inst, "pa\n"))
		push_a(stack_a, stack_b, 0);
	else if (!ft_strcmp(inst, "pb\n"))
		push_b(stack_a, stack_b, 0);
	else if (!ft_strcmp(inst, "ra\n"))
		rotate_a(stack_a, 0);
	else if (!ft_strcmp(inst, "rb\n"))
		rotate_b(stack_b, 0);
	else if (!ft_strcmp(inst, "rr\n"))
		ra_rb(stack_a, stack_b, 0);
	else
		ft_error("Error");
}

int	main(int ac, char **av)
{
	t_var	data;
	t_list	*stack_a;
	t_list	*stack_b;
	char	*inst;

	if (ac < 2)
		return (0);
	stack_a = NULL;
	stack_b = NULL;
	data = put_on_it(av);
	data = array_to_stack(&stack_a, data);
	inst = get_next_line(0);
	while (inst)
	{
		check_and_apply(inst, &stack_a, &stack_b);
		free(inst);
		inst = get_next_line(0);
	}
	if (!check_if_sort(stack_a) && (lstsize(stack_b) == 0))
		write(1, "OK", 2);
	else
		write(1, "KO", 2);
	exit (0);
	return (0);
}
