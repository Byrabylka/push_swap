/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <fooswyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:50:06 by fooswyn           #+#    #+#             */
/*   Updated: 2022/05/10 16:34:00 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

int	main(int argc, char **argv)
{
	t_data	*data;

	if (argc < 2)
		ft_error();
	data = init_data(data, argv, argc);
	if (!fill_stack_a(data))
		exit(1);
	//if (!is_sorted(data))
	//	solve(data);
	free_data(data);

}