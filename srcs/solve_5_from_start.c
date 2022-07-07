/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_5_from_start.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <fooswyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:36:59 by fooswyn           #+#    #+#             */
/*   Updated: 2022/05/25 17:44:06 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	solve_03(t_data *data, t_stack *d)
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
		r_rotate_a(data);
		swap_a(data);
	}
	else if (b < a && a < c) //2 1 3
		swap_a(data);
	else if (a < b && c < a)  //2 3 1
		r_rotate_a(data);
	else if (b < c && c < a) // 3 1 2
		rotate_a(data);
	else   // 3 2 1
	{
		swap_a(data);
		r_rotate_a(data);
	}
}

void	solve_04(t_data *data)
{

	find_min_max(data, 1);
	if (ft_lstlast(data->a)->content != data->min)
		while (data->a->content != data->min)
			rotate_a(data);
	else
		while (data->a->content != data->min)
			r_rotate_a(data);
	if (is_sorted(data->a))
		return;
	push_b(data);
	solve_03(data, data->a);
	push_a(data);
}

void	solve_5(t_data *data)
{
	find_min_max(data, 1);
	if (ft_lstlast(data->a)->content != data->min && ft_predlast(data->a)->content != data->min)
		while (data->a->content != data->min)
			rotate_a(data);
	else
		while (data->a->content != data->min)
			r_rotate_a(data);
	if (is_sorted(data->a))
		return;
	push_b(data);
	solve_04(data);
	push_a(data);	
}
void solve_5_from_start(t_data *data)
{
	t_stack	*stack;

	stack = data->a;

	if (ft_lstsize(stack) == 2)
		swap_a(data);
	else if (ft_lstsize(stack) == 3)
		solve_03(data, stack);
	else if (ft_lstsize(stack) == 4)
		solve_04(data);
	else
		solve_5(data);
}