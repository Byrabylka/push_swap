/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <fooswyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:26:26 by fooswyn           #+#    #+#             */
/*   Updated: 2022/07/11 17:57:59 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	solve2(t_data *data, int border, int c, int pt)
{
	int		i;
	int		j;
	t_stack	*stack;

	i = 0;
	j = 0;
	while (2 * i + 2 <= border)
	{
	stack = tern0(pt / 2, data->a, data->b);
		if (tern3(pt / 2, stack->content, c))
		{
			tern1(pt / 2, data);
			i++;
		}
		else
		{
			rotate_stack(data, (pt / 2));
			j++;
		}
	}
	while (j && !(pt % 2))
	{
		r_rotate_stack(data, (pt / 2));
		j--;
	}
}

void	solve3(t_data *data, int p, int t)
{
	t_stack	*curr_a;
	t_stack	*curr_b;

	curr_b = data->b;
	data->b = NULL;
	solve(data, 1, t);
	data->b = curr_b;
	curr_a = data->a;
	data->a = NULL;
	solve(data, 0, 0);
	data->a = curr_a;
	if (p)
		while (ft_lstsize(data->b) > 0)
			push_a(data);
	else
		while (ft_lstsize(data->a) > 0)
			push_b(data);
}

void	solve(t_data *data, int p, int t)
{
	t_stack	*stack;
	int		border;
	int		curr_median;

	stack = tern0(p, data->a, data->b);
	if ((p && is_sorted(data->a)) || (!p && is_sorted_b(data->b)))
		return ;
	find_median(data, p);
	curr_median = data->median;
	if (ft_lstsize(stack) % 2 && p)
		curr_median--;
	if (ft_lstsize(stack) < 4)
		tern2(p, data);
	else
	{
		border = ft_lstsize(stack);
		solve2(data, border, curr_median, 2 * p + t);
		solve3(data, p, t);
	}
}
