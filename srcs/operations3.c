/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <fooswyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 21:59:11 by fooswyn           #+#    #+#             */
/*   Updated: 2022/07/10 18:12:38 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	swap_stack(t_data *data, int p)
{
	if (p == 2)
	{
		swap_a(data);
		swap_b(data);
	}
	else if (p == 1)
		swap_a(data);
	else
		swap_b(data);
}

void	rotate_stack(t_data *data, int p)
{
	if (p == 2)
	{
		rotate_a(data);
		rotate_b(data);
	}
	else if (p == 1)
		rotate_a(data);
	else
		rotate_b(data);
}

void	r_rotate_stack(t_data *data, int p)
{
	if (p == 2)
	{
		r_rotate_a(data);
		r_rotate_b(data);
	}
	else if (p == 1)
		r_rotate_a(data);
	else
		r_rotate_b(data);
}
