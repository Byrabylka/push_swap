/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <fooswyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:50:06 by fooswyn           #+#    #+#             */
/*   Updated: 2022/05/25 17:42:11 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

int	main(int argc, char **argv)
{
	t_data	*data;

	data = NULL;
	if (argc < 2)
		ft_error();
	data = init_data(data, argv, argc);
	if (!fill_stack_a(data))
		ft_error();
	if (!is_sorted(data->a) && ft_lstsize(data->a) > 5)
		solve(data, 1, 1);
	if (!is_sorted(data->a) && ft_lstsize(data->a) <= 5)
		solve_5_from_start(data);
	ft_final_out(data);
	ft_out(data->a);
}
