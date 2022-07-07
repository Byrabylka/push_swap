/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <fooswyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 21:59:11 by fooswyn           #+#    #+#             */
/*   Updated: 2022/05/23 21:59:14 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	swap_stack(t_data *data, int p)
{
	if (p)
		swap_a(data);
	else
		swap_b(data);
}

void	rotate_stack(t_data *data, int p)
{
	if (p)
		rotate_a(data);
	else
		rotate_b(data);
}

void	r_rotate_stack(t_data *data, int p)
{
	if (p)
		r_rotate_a(data);
	else
		r_rotate_b(data);
}
