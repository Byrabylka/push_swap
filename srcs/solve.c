/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <fooswyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:26:26 by fooswyn           #+#    #+#             */
/*   Updated: 2022/05/23 19:34:37 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void   solve(t_data *data, int p)
{
	t_stack *stack;
	t_stack	*curr_a;
	t_stack	*curr_b;
	int		i;
	int		border;
	int		curr_median;

	if ((p && is_sorted(data->a)) || (!p && is_sorted_b(data->b)))
		return;
	stack = p ? data->a : data->b;
	i = 0;
	find_min_max(data, p);
	find_median(data, p);
	curr_median = data->median;
	if (ft_lstsize(stack) % 2 && p)
		curr_median--;
	if (ft_lstsize(stack) < 5)
		{
        	(p == 1) ? solve_5_or_less(data) : solve_5_or_less_b(data);
		}
    else
	{
		border = ft_lstsize(stack);
		while (2 * i + 2 <= border)
		{
			stack = p ? data->a : data->b;
			if (p ? stack->content <= curr_median : stack->content > curr_median)
			{
				p ? push_b(data) : push_a(data);
				i++;
			}
			else
				rotate_stack(data, p);
		}
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
		//ft_lstclear(&curr_a);
		//ft_lstclear(&curr_b);
	}
}
