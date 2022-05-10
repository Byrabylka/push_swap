/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <fooswyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:08:41 by fooswyn           #+#    #+#             */
/*   Updated: 2022/05/10 16:45:59 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"


int	fill_stack_a(t_data *data)
{
	int	i;

	i = 1;
	if (data->argc == 2)
		while (ft_split(data->argv[1], ' ')[i - 1])
		{
			data->argv[i - 1] = ft_split(data->argv[1], ' ')[i - 1];
			i++;
		}
	i = 1;
	if (!pars1(data) || !pars2(data))
		ft_error();
	while (i < data->argc)
	{
		ft_lstadd_back(&data->a, ft_lstnew((int)ft_atoi(data->argv[i])));
		i++;
	}
	if (!pars3(data))
		ft_error();
	return (1);
}


t_data	*init_data(t_data *data, char **argv, int argc)
{
	data = (t_data *)malloc(sizeof(t_data));
	if (!data)
		exit(1);
	data->a = NULL;
	data->b = NULL;
	data->argc = argc;
	data->argv = argv;
	data->stack_len = 0;
	return (data);	
}