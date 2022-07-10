/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_4_or_less_b.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <fooswyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:05:20 by fooswyn           #+#    #+#             */
/*   Updated: 2022/05/25 17:36:47 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	solve_3_b_2(t_data *data, int a, int b, int c)
{
	if (a < c && c < b)
	{
		swap_b(data);
		push_a(data);
		swap_b(data);
		push_b(data);
	}
	else if (b < a && a < c)
	{
		push_a(data);
		swap_b(data);
		push_b(data);
		swap_b(data);
	}
	else if (c < a && a < b)
		swap_b(data);
	else if (b < c && c < a)
	{
		push_a(data);
		swap_b(data);
		push_b(data);
	}	
}

void	solve_3_b(t_data *data, t_stack *d)
{
	int	a;
	int	b;
	int	c;

	a = d->content;
	b = d->next->content;
	c = d->next->next->content;
	if (a > b && b > c)
		return ;
	if (a < b && b < c)
	{
		push_a(data);
		push_a(data);
		swap_a(data);
		rotate_b(data);
		push_b(data);
		push_b(data);
		r_rotate_b(data);
	}
	else
		solve_3_b_2(data, a, b, c);
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
}
