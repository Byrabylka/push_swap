/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <fooswyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:50:06 by fooswyn           #+#    #+#             */
/*   Updated: 2022/05/23 18:35:18 by fooswyn          ###   ########.fr       */
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
		exit(1);
	if (!is_sorted(data->a))
		solve(data, 1);
	ft_out(data->a);
	free_data(data);
}
