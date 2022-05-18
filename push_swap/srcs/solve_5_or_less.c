/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_5_or_less.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <fooswyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:36:16 by fooswyn           #+#    #+#             */
/*   Updated: 2022/05/18 17:39:18 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	solve_3(t_data *data, t_stack *d)
{
	int a;
	int	b;
	int	c;

	a = d->content;
	b = d->next->content;
	c = d->next->next->content;
	find_min_max(data, 1);
	if (a < b && b < c)   // 1 2 3
		return;
	if (a < c &&  c < b) // 1 3 2
	{
		r_rotate_a(data, 1);
		swap_a(data, 1);
	}
	else if (b < a && a < c) //2 1 3
		swap_a(data, 1);
	else if (a < b && c < a)  //2 3 1
		r_rotate_a(data, 1);
	else if (b < c && c < a) // 3 1 2
		rotate_a(data, 1);
	else   // 3 2 1
	{
		swap_a(data, 1);
		r_rotate_a(data, 1);
	}
}

void	solve_4(t_data *data)
{
	find_min_max(data, 1);
	if (ft_lstlast(data->a)->content != data->min)
		while (data->a->content != data->min)
			rotate_a(data, 1);
	else
		while (data->a->content != data->min)
			r_rotate_a(data, 1);
	if (is_sorted(data->a))
		return;
	push_b(data);
	solve_3(data, data->a);
	push_a(data);
}



void	solve_5(t_data *data)
{
	find_min_max(data, 1);
	if (ft_lstlast(data->a)->content != data->min  && ft_predlast(data->a)->content != data->min)
		while (data->a->content != data->min)
			rotate_a(data, 1);
	else
		while (data->a->content != data->min)
			r_rotate_a(data, 1);
	if (is_sorted(data->a))
		return;
	push_b(data);
	solve_4(data);
	push_a(data);
}

void solve_5_or_less(t_data *data)
{
	t_stack	*stack;

	stack = data->a;

	if (ft_lstsize(stack) == 2)
		swap_a(data, 1);
	else if (ft_lstsize(stack) == 3)
		solve_3(data, stack);
	else if (ft_lstsize(stack) == 4)
		solve_4(data);
	else
		solve_5(data);
}