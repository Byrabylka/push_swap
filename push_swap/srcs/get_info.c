/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_info.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:40:54 by fooswyn           #+#    #+#             */
/*   Updated: 2022/03/29 17:09:04 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	find_min_max(t_data *data, int p)
{
	int		i;
	t_stack	*stack;

	i = 0;
	if (p == 1)
		stack = data->a;
	else
		stack = data->b;
	while (i < ft_lstsize(stack))
	{
		if (stack->content >= data->max)
			data->max = stack->content;
		if (stack->content <= data->min)
			data->min = stack->content;
		stack = stack->next;
		i++;
	}
}

void	find_median(t_data *data, int p)
{
	int		i;
	int		j;
	int		minn;
	t_stack	*stack;
	t_stack *tmp;

	i = 0;
	if (p == 1)
		stack = data->a;
	else
		stack = data->b;
	while (2 * i < ft_lstsize(stack))
	{
		minn = 2147483647;
		j = 0;
		tmp = stack;
		while (j < ft_lstsize(tmp))
		{
			if (tmp->content > data->median && tmp->content <= minn)
				minn = tmp->content;
			j++;
			tmp = tmp->next;
		}
		data->median = minn;
		i++;
	}
}