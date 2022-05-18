/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <fooswyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:26:26 by fooswyn           #+#    #+#             */
/*   Updated: 2022/05/18 20:09:22 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

int	need_ra(t_stack *a, int min)
{
	int i;
	int end;
	int len;
	t_stack *tmp;

	i = 0;
	len = ft_lstsize(a);
	end = (len % 2) ? ( len + 2) / 2 : ( len + 1) / 2;
	tmp = a;
	while (i <= end)
	{
		if (tmp->content == min)
			return 1;
		tmp = tmp->next;
		i++;
	}
	return 0;
}

void    solve(t_data *data, int p)
{
	t_stack *stack;
	t_stack	*curr_a;
	t_stack	*curr_b;
	int		i;
	int		border;
	int		curr_median;

	stack = p ? data->a : data->b;
	i = 0;
	find_min_max(data, p);
	find_median(data, p);
	if (!p)
		ft_out(data->b);
	curr_median = data->median;
	if (ft_lstsize(stack) % 2)
		curr_median--;   
	if (ft_lstsize(stack) <= 5)
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
		data->b = curr_b;
		data->a = curr_a;
		while (ft_lstsize(data->b) > 0)
			push_a(data);
		//ft_lstclear(&curr_a);
		//ft_lstclear(&curr_b);
	}
	
}


//1 2 3 4 5 6
//