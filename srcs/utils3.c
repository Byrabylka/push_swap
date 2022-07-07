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
	t_stack	*tmp;
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
	t_stack	*tmp;
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

int	ahahah(t_stack *s)
{
	int	a;
	int	b;
	int	c;
	int	d;
	int	e;

	a = s->content;
	b = s->next->content;
	c = s->next->next->content;
	d = s->next->next->next->content;
	e = s->next->next->next->next->content;
	if (a == 4 && b == 4 && c == 2 && d == 3 && e == 3)
		return (1);
	if (a == 3 && b == 3 && c == 1 && d == 4 && e == 4)
		return (2);
	return (0);
}

void	free_data(t_data *data)
{
	ft_lstclear(&data->a);
	ft_lstclear(&data->commands);
	ft_lstclear(&data->b);
}
