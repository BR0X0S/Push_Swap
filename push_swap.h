/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 23:01:47 by oumondad          #+#    #+#             */
/*   Updated: 2024/03/26 23:14:41 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

/* LINKED LIST STRUCT */

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}	t_list;

/* PARCING STRUCT */

typedef struct s_var
{
	int		i;
	int		j;
	int		sign;
	long	result;
	long	y;
	char	*args;
	char	**split;
	int		*array;
}	t_var;

/* PARCING FUNCTIONS */

int		ft_atoi(char *str);
void	ft_error(char *str);
size_t	ft_strlen(char *str);
t_var	check_all(t_var data);
void	ft_check_str(char *str);
t_var	ft_khchi_fchi(char **av);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char *stack, char *buffer);
char	*ft_substr(char const *s, unsigned int start, size_t len);

/* INSTRACTION FUNCTIONS */

void	push_a(t_list **stack_a, t_list **stack_b, int flag);
void	push_b(t_list **stack_a, t_list **stack_b, int flag);
void	swap_s(t_list **stack_a, t_list **stack_b, int flag);
void	ra_rb(t_list **stack_a, t_list **stack_b, int flag);
void	rrr(t_list **stack_a, t_list **stack_b, int flag);
void	revers_rotate_a(t_list **stack_a, int flag);
void	revers_rotate_b(t_list **stack_b, int flag);
void	rotate_a(t_list **stack_a, int flag);
void	rotate_b(t_list **stack_a, int flag);
void	swap_a(t_list **stack_a, int flag);
void	swap_b(t_list **stack_b, int flag);
t_var	bubble_sort(t_var data);

/* lists fanktoin*/

int		lstsize(t_list *lst);
t_list	*ft_lstnew(int content);
t_list	*ft_lstlast(t_list *lst);
void	print_stack(t_list *stack_a, char c);
t_list	*ft_before_last(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_var	array_to_stack(t_list **stack_a, t_var data);
void	ft_lstadd_front(t_list **stack, t_list *new_node);

/* SORT FUNCTIONS */
/*********************/

#endif