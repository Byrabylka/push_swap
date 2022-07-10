/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <fooswyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:46:13 by fooswyn           #+#    #+#             */
/*   Updated: 2022/07/10 19:09:52 by fooswyn          ###   ########.fr       */
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
	if ((a == b + 1 || a == b - 1) && a != 3 && b != 3 && a <= 8
		&& b <= 8 && !(ft_max(a, b) % 2))
		return (1);
	return (0);
}

void	less_commands(t_stack *s)
{
	t_stack	*tmp;
	t_stack	*tmp2;
	int		max;

	while (!check(s))
	{
		tmp = s;
		while (tmp->content != 0)
		{
			max = ft_max(tmp->next->content, tmp->next->next->content);
			tmp2 = tmp->next;
			if (close_or_no(tmp->next->content, tmp->next->next->content))
			{
				tmp->next->next->content = (max * max - 2 * max + 216) / 24;
				tmp->next = tmp->next->next;
				free(tmp2);
			}
			if (check_f(tmp->next->content, tmp->next->next->content))
			{
				tmp->next = tmp->next->next->next;
				free_n(tmp2, 2);
			}
			tmp = tmp->next;
		}				
	}
}

void	less_commands2(t_stack *s)
{
	t_stack	*tmp;
	t_stack	*tmp2;
	int		flag;
	int		be;

	flag = 1;
	while (flag)
	{
		tmp = s;
		flag = 0;
		while (tmp->content != 0)
		{
			if (ahahah(tmp->next))
			{
				be = ahahah(tmp->next);
				tmp2 = tmp->next;
				tmp->next = tmp->next->next->next->next->next;
				tmp->next->content = be;
				free_n(tmp2, 4);
				flag = 1;
			}
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
	if (!ft_lstsize(tmp))
		return ;
	ft_lstadd_front(&tmp, ft_lstnew(-1));
	while (i++ < 5)
		ft_lstadd_back(&tmp, ft_lstnew(0));
	data->commands = tmp;
	less_commands(tmp);
	less_commands2(tmp);
	while (tmp->content)
	{
		if (tmp->content != -1)
			ft_putstr_fd(data->c[tmp->content], 1);
		tmp = tmp->next;
	}
}
