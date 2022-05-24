/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_4_or_less.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <fooswyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:36:16 by fooswyn           #+#    #+#             */
/*   Updated: 2022/05/24 20:18:40 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	solve_3(t_data *data, t_stack *d)
{
	int	a;
	int	b;
	int	c;

	a = d->content;
	b = d->next->content;
	c = d->next->next->content;
	if (a < b && b < c) //1 2 3
		return ;
	else if (a < c && c < b) //1 3 2
	{
		push_b(data);
		swap_a(data);
		push_a(data);
	}
	else if (b < a && a < c)  //2 1 3
		swap_a(data);
	else if (a < b && c < a)  //2 3 1
	{
		push_b(data);
		swap_a(data);
		push_a(data);
		swap_a(data);
	}
	else if (b < c && c < a) // 3 1 2
	{
		swap_a(data);
		push_b(data);
		swap_a(data);
		push_a(data);
	}
	else // 3 2 1
	{
		push_b(data);
		push_b(data);    
		swap_b(data);
		rotate_a(data);
		push_a(data);
		push_a(data);
		r_rotate_a(data);
	}
}

void	solve_4(t_data *data)
{
	find_min_max(data, 1);
	if (ft_lstlast(data->a)->content != data->min)
		while (data->a->content != data->min)
			rotate_a(data);
	else
		while (data->a->content != data->min)
			r_rotate_a(data);
	if (is_sorted(data->a))
		return ;
	push_b(data);
	solve_3(data, data->a);
	push_a(data);
}

void	solve_4_or_less(t_data *data)
{
	t_stack	*stack;

	stack = data->a;
	if (ft_lstsize(stack) == 2)
		swap_a(data);
	else if (ft_lstsize(stack) == 3)
		solve_3(data, stack);
	else if (ft_lstsize(stack) == 4)
		solve_4(data);
}
