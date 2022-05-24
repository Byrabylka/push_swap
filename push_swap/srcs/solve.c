/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <fooswyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:26:26 by fooswyn           #+#    #+#             */
/*   Updated: 2022/05/24 20:29:14 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	solve2(t_data *data, int border, int curr_median, int p)
{
	int		i;
	int		j;
	t_stack	*stack;

	i = 0;
	j = 0;
	while (2 * i + 2 <= border)
	{
		stack = p ? data->a : data->b;
		if (p ? stack->content <= curr_median : stack->content > curr_median)
		{
			p ? push_b(data) : push_a(data);
			i++;
		}
		else
		{
			rotate_stack(data, p);
			j++;
		}
	}
	while (j)	
	{
		r_rotate_stack(data, p);
		j--;
	}
}

void	solve3(t_data *data, int p)
{
	t_stack	*curr_a;
	t_stack	*curr_b;

	curr_b = ft_lst_copy(data->b);
	data->b = 0;
	solve(data, 1);
	curr_a = ft_lst_copy(data->a);
	data->b = curr_b;
	data->a = 0;
	solve(data, 0);
	data->a = curr_a;
	if (p)
		while (ft_lstsize(data->b) > 0)
			push_a(data);
	else
		while (ft_lstsize(data->a) > 0)
			push_b(data);
}

void	solve(t_data *data, int p)
{
	t_stack	*stack;
	int		i;
	int		border;
	int		curr_median;

	stack = p ? data->a : data->b;
	i = 0;
	if ((p && is_sorted(data->a)) || (!p && is_sorted_b(data->b)))
		return ;
	find_median(data, p);
	curr_median = data->median;
	if (ft_lstsize(stack) % 2 && p)
		curr_median--;
	if (ft_lstsize(stack) < 4)
		p ? solve_4_or_less(data) : solve_4_or_less_b(data);
	else
	{
		border = ft_lstsize(stack);
		solve2(data, border, curr_median, p);
		solve3(data, p);
	}
}
