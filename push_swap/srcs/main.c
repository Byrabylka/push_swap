/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:50:06 by fooswyn           #+#    #+#             */
/*   Updated: 2022/03/29 16:43:06 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

int	main(int argc, char **argv)
{
	t_data	*data;
	if (argc < 2)
		return (1);
	data = init_data(data, argv, argc);
	if (!fill_stack_a(data))
		exit(1);
	if (!is_sorted(data))
		solve(data);
	free_data(data);

}