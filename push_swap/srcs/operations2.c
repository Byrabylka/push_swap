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
	tmp = data->a->next;
	ft_lstadd_back(&tmp, ft_lstnew(data->a->content));
	data->a = tmp;
}

void	rotate_b(t_data *data)
{
	t_stack	*tmp;

	ft_lstadd_back(&data->commands, ft_lstnew(6));
	if (ft_lstsize(data->b) <= 1)
		return ;
	tmp = data->b->next;
	ft_lstadd_back(&tmp, ft_lstnew(data->b->content));
	data->b = tmp;
}

void	r_rotate_a(t_data *data)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	ft_lstadd_back(&data->commands, ft_lstnew(7));
	if (ft_lstsize(data->a) <= 1)
		return ;
	tmp = ft_lstnew(ft_lstlast(data->a)->content);
	tmp2 = tmp;
	tmp->next = data->a;
	while (tmp2->next->next)
	{
		tmp2 = tmp2->next;
	}
	tmp2->next = NULL;
	data->a = tmp;
}

void	r_rotate_b(t_data *data)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	ft_lstadd_back(&data->commands, ft_lstnew(8));
	if (ft_lstsize(data->b) <= 1)
		return ;
	tmp = ft_lstnew(ft_lstlast(data->b)->content);
	tmp2 = tmp;
	tmp->next = data->b;
	while (tmp2->next->next)
		tmp2 = tmp2->next;
	tmp2->next = NULL;
	data->b = tmp;
}
