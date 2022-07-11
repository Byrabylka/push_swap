/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <fooswyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:50:52 by fooswyn           #+#    #+#             */
/*   Updated: 2022/07/11 18:01:20 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

t_stack	*tern0(int p, t_stack *a, t_stack *b)
{
	if (p)
		return (a);
	return (b);
}

void	tern1(int p, t_data *data)
{
	if (p)
		push_b(data);
	else
		push_a(data);
}

void	tern2(int p, t_data *data)
{
	if (p)
		solve_4_or_less(data);
	else
		solve_4_or_less_b(data);
}

int	tern3(int p, int content, int c)
{
	if (p)
		return (content <= c);
	return (content > c);
}
