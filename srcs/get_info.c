/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_info.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <fooswyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:40:54 by fooswyn           #+#    #+#             */
/*   Updated: 2022/05/18 20:56:48 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	find_min_max(t_data *data, int p)
{
	t_stack	*stack;

	data->max = -2147483648;
	data->min = 2147483647;
	if (p == 1)
		stack = data->a;
	else
		stack = data->b;
	while (stack)
	{
		if (stack->content >= data->max)
			data->max = stack->content;
		if (stack->content <= data->min)
			data->min = stack->content;
		stack = stack->next;
	}
}

void	find_median(t_data *data, int p)
{
	int		i;
	int		minn;
	t_stack	*stack;
	t_stack	*tmp;

	data->median = -2147483648;
	i = 0;
	if (p == 1)
		stack = data->a;
	else
		stack = data->b;
	while (2 * i < ft_lstsize(stack))
	{
		minn = 2147483647;
		tmp = stack;
		while (tmp)
		{
			if (tmp->content > data->median && tmp->content <= minn)
				minn = tmp->content;
			tmp = tmp->next;
		}
		data->median = minn;
		i++;
	}
}
