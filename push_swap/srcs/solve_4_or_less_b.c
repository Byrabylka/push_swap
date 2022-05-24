/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_4_or_less_b.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <fooswyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:05:20 by fooswyn           #+#    #+#             */
/*   Updated: 2022/05/24 20:20:08 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	solve_3_b(t_data *data, t_stack *d)
{
	int	a;
	int	b;
	int	c;

	a = d->content;
	b = d->next->content;
	c = d->next->next->content;
	if (a > b && b > c) // 3 2 1
		return ;
	if (a < b && b < c) // 1 2 3
	{
		push_a(data);
		push_a(data);    
		swap_a(data);
		rotate_b(data);
		push_b(data);
		push_b(data);
		r_rotate_b(data);
	}
	else if (a < c && c < b) // 1 3 2
	{
		swap_b(data);
		push_a(data);
		swap_b(data);
		push_b(data);
	}
	else if (b < a && a < c) // 2 1 3
	{
		push_a(data);
		swap_b(data);
		push_b(data);
		swap_b(data);
	}
	else if (c < a && a < b) // 2 3 1
		swap_b(data);
	else if (b < c && c < a) // 3 1 2
	{
		push_a(data);
		swap_b(data);
		push_b(data);
	}
}

void	solve_4_b(t_data *data)
{
	find_min_max(data, 0);
	if (ft_lstlast(data->b)->content != data->max)
		while (data->b->content != data->max)
			rotate_b(data);
	else
		while (data->b->content != data->max)
			r_rotate_b(data);
	if (is_sorted_b(data->b))
		return ;
	push_a(data);
	solve_3_b(data, data->b);
	push_b(data);
}

void	solve_4_or_less_b(t_data *data)
{
	t_stack	*stack;

	stack = data->b;
	if (is_sorted_b(stack))
		return ;
	if (ft_lstsize(stack) == 2 && is_sorted(stack))
		swap_b(data);
	else if (ft_lstsize(stack) == 3)
		solve_3_b(data, stack);
	else if (ft_lstsize(stack) == 4)
		solve_4_b(data);
}
