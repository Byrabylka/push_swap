/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <fooswyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:14:41 by fooswyn           #+#    #+#             */
/*   Updated: 2022/05/24 20:09:19 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	rotate_a(t_data *data)
{
	t_stack	*tmp;

	ft_lstadd_back(&data->commands, ft_lstnew(5));
	if (ft_lstsize(data->a) <= 1)
		return ;
	tmp = data->a;
	data->a = data->a->next;
	tmp->next = NULL;
	ft_lstadd_back(&data->a, tmp);
}

void	rotate_b(t_data *data)
{
	t_stack	*tmp;

	ft_lstadd_back(&data->commands, ft_lstnew(6));
	if (ft_lstsize(data->b) <= 1)
		return ;
	tmp = data->b;
	data->b = data->b->next;
	tmp->next = NULL;
	ft_lstadd_back(&data->b, tmp);
}

void	r_rotate_a(t_data *data)
{
	t_stack	*tmp;

	ft_lstadd_back(&data->commands, ft_lstnew(7));
	if (ft_lstsize(data->a) <= 1)
		return ;
	tmp = ft_lstlast(data->a);
	ft_predlast(data->a)->next = NULL;
	ft_lstadd_front(&data->a, tmp);
}

void	r_rotate_b(t_data *data)
{
	t_stack	*tmp;

	ft_lstadd_back(&data->commands, ft_lstnew(8));
	if (ft_lstsize(data->b) <= 1)
		return ;
	tmp = ft_lstlast(data->b);
	ft_predlast(data->b)->next = NULL;
	ft_lstadd_front(&data->b, tmp);
}
