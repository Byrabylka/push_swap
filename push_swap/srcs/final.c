/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <fooswyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:46:13 by fooswyn           #+#    #+#             */
/*   Updated: 2022/05/24 20:08:10 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

int	check(t_stack *s)
{
	t_stack	*tmp;

	tmp = s;
	while (tmp->content)
	{
		if (tmp->content % 2 && \
		tmp->next->content == tmp->content + 1 && tmp->content < 8)
			return (0);
		tmp = tmp->next;
	}
	tmp = s;
	while (tmp->content)
	{
		if (!(tmp->content % 2) && \
		tmp->next->content == tmp->content - 1 && tmp->content < 8)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	close_or_no(int a, int b)
{
	if ((a == b + 1 || a == b - 1) && a != 3 && b != 3 && a <= 8 && b <= 8 && !(ft_max(a, b) % 2))
		return (1);
	return (0);
}

void	less_commands(t_stack *s)
{
	t_stack	*tmp;
	int		max;

	while (!check(s))
	{
		tmp = s;
		while (tmp->content != 0)
		{
			max = ft_max(tmp->next->content, tmp->next->next->content);
			if (close_or_no(tmp->next->content, tmp->next->next->content))
			{
				tmp->next->next->content = (max * max - 2 * max + 216) / 24;
				tmp->next = tmp->next->next;
			}
			if (tmp->next->content == 3 && tmp->next->next->content == 4)
				tmp->next = tmp->next->next->next;
			if (tmp->next->content == 4 && tmp->next->next->content == 3)
				tmp->next = tmp->next->next->next;
			tmp = tmp->next;
		}				
	}
}

void	ft_final_out(t_data *data)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	tmp = data->commands;
	while (i++ < 5)
		ft_lstadd_back(&tmp, ft_lstnew(0));
	less_commands(tmp);
	while (tmp->content)
	{
		ft_putstr_fd(data->c[tmp->content], 1);
		tmp = tmp->next;
	}
}
