/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <fooswyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 21:16:11 by fooswyn           #+#    #+#             */
/*   Updated: 2022/05/25 17:51:47 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

int	ft_lstmax(t_stack *stack)
{
	t_stack *tmp;
	int		max;

	tmp = stack;
	max = -2147483648;
	while (tmp)
	{
		if (tmp->content >= max)
			max = tmp->content;
		tmp = tmp->next;
	}
	return (max);
}

int	ft_lstmin(t_stack *stack)
{
	t_stack *tmp;
	int		min;

	tmp = stack;
	min = 2147483647;
	while (tmp)
	{
		if (tmp->content <= min)
			min = tmp->content;
		tmp = tmp->next;
	}
	return (min);
}