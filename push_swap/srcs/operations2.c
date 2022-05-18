/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <fooswyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:14:41 by fooswyn           #+#    #+#             */
/*   Updated: 2022/05/18 19:36:04 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	rotate_a(t_data *data, int p)
{
	t_stack	*tmp;
	
	if (ft_lstsize(data->a) <= 1)
		return ;
	tmp = data->a->next;
	ft_lstadd_back(&tmp, ft_lstnew(data->a->content));
	data->a = tmp;
	if (p)
		ft_putstr_fd("ra\n", 1);
}

void	rotate_b(t_data *data, int p)
{
	t_stack	*tmp;

	if (ft_lstsize(data->b) <= 1)
		return ;	
	tmp = data->b->next;
	ft_lstadd_back(&tmp, ft_lstnew(data->b->content));
	data->b = tmp;
	if (p)
		ft_putstr_fd("rb\n", 1);
}

void	r_rotate(t_data *data)
{
	rotate_a(data, 0);
	rotate_b(data, 0);
	ft_putstr_fd("rr\n", 1);
}



void	r_rotate_a(t_data *data, int p)
{
	t_stack	*tmp;
	t_stack *tmp2;

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
	if (p)
		ft_putstr_fd("rra\n", 1);	
}

void	r_rotate_b(t_data *data, int p)
{
	t_stack	*tmp;
	t_stack *tmp2;

	if (ft_lstsize(data->b) <= 1)
		return ;
	tmp = ft_lstnew(ft_lstlast(data->b)->content);
	tmp2 = tmp;
	tmp->next = data->b;
	while (tmp2->next->next)
		tmp2 = tmp2->next;
	tmp2->next = NULL;
	data->b = tmp;
	if (p)
		ft_putstr_fd("rrb\n", 1);	
}
