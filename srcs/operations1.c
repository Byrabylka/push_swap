/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <fooswyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:05:10 by fooswyn           #+#    #+#             */
/*   Updated: 2022/05/23 20:11:47 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	swap_a(t_data *data)
{
	int	tmp;

	if (ft_lstsize(data->a) >= 2)
	{
		tmp = data->a->content;
		data->a->content = data->a->next->content;
		data->a->next->content = tmp;
	}
	ft_lstadd_back(&data->commands, ft_lstnew(1));
}

void	swap_b(t_data *data)
{
	int	tmp;

	if (ft_lstsize(data->b) >= 2)
	{
		tmp = data->b->content;
		data->b->content = data->b->next->content;
		data->b->next->content = tmp;
	}
	ft_lstadd_back(&data->commands, ft_lstnew(2));
}

void	push_a(t_data *data)
{
	t_stack	*tmp;

	if (!ft_lstsize(data->b))
		return ;
	tmp = data->b;
	data->b = data->b->next;
	tmp->next = NULL;
	ft_lstadd_front(&data->a, tmp);
	ft_lstadd_back(&data->commands, ft_lstnew(3));
}

void	push_b(t_data *data)
{
	t_stack	*tmp;

	if (!ft_lstsize(data->a))
		return ;
	tmp = data->a;
	data->a = data->a->next;
	tmp->next = NULL;
	ft_lstadd_front(&data->b, tmp);
	ft_lstadd_back(&data->commands, ft_lstnew(4));
}
