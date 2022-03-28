/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:08:41 by fooswyn           #+#    #+#             */
/*   Updated: 2022/03/28 17:52:10 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"


int	fill_stack_a(t_data *data)
{
	int	i;

	i = 1;
	if (!pars1(data))
		return (ft_error(1));
	if (!pars2(data))
		return (ft_error(2));
	while (i < data->argc)
	{
		ft_lstadd_back(&data->a, ft_lstnew((int)ft_atoi(data->argv[i])));
		i++;
	}
	if (!pars3(data))
		return(ft_error(3));
	return (1);
}

t_data	*init_data(t_data *data, char **argv, int argc)
{
	data = (t_data *)malloc(sizeof(t_data));
	if (!data)
		exit(1);
	data->a = NULL;
	data->b = NULL;
	data->argv = argv;
	data->argc = argc;
	data->stack_len = 0;
	return (data);	
}