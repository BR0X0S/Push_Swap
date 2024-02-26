/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_libft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:40:01 by oumondad          #+#    #+#             */
/*   Updated: 2024/02/26 17:45:34 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

void	ft_check_str(char *str)
{
	int	i;
	int x;
	int o;

	i = 0;
	x = 0;
	o = 0;
	while (str[o] == '0')
		o++;
	while(str[i])
	{
		if (str[i] != ' ')
			x++;
		i++;
	}
	if (x == 0 ||  (i - o) > 11)
		ft_error("ERROR\n");
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*place;
	size_t	i;

	place = malloc (len + 1);
	if (!place)
		ft_error ("Error : substr allocation faild");
	i = 0;
	while (i < len && s[start])
	{
		place[i] = s[start];
		i++;
		start++;
	}
	place[i] = '\0';
	return (place);
}

char	*ft_strjoin(char *stack, char *buffer)
{
	char	*str;
	size_t	j;
	size_t	i;
	size_t	stack_len;
	size_t	buffer_len;

	stack_len = ft_strlen(stack);
	buffer_len = ft_strlen(buffer);
	i = -1;
	str = malloc(stack_len + buffer_len + 1);
	if (!str)
		return (free(stack), free(buffer), NULL);
	while (++i < stack_len && stack)
		str[i] = stack[i];
	str[i] = '\0';
	j = -1;
	while (++j < buffer_len)
		str[i + j] = buffer[j];
	str[i + j] = '\0';
	return (free(stack), free(buffer), str);
}

long	ft_atol(char *str)
{
	t_var data;

	data.i = 0;
	data.sign = 1;
	data.result = 0;
	if (str[data.i] == '-' || str[data.i] == '+')
	{
		if (str[data.i] == '-')
			data.sign = -1;
		data.i++;
	}
	while ((str[data.i] >= '0' && str[data.i] <= '9'))
	{
		if (data.result * 10 > 2147483648 || data.result * 10 * data.sign < -2147483647)
			ft_error("Error");
		data.result = data.result * 10 + (str[data.i] - '0');
		data.i++;
	}
	if (str[data.i] || (str[data.i] < '0' && str[data.i] > '9'))
		ft_error("Error");
	return (data.result * data.sign);
}