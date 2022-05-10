/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_5_or_less.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <fooswyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:36:16 by fooswyn           #+#    #+#             */
/*   Updated: 2022/05/10 16:47:16 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	solve_3(t_data *data)
{
	int a = data->a->content;
	int b = data->a->next->content;
	int c = data->a->next->next->content;	
}






void solve_5_or_less(t_data *data)
{
	int len = ft_lstsize(data->a);
	if (len == 2)
		swap_a(data, 1);
	else if (len == 3)
		solve_3(data);
}