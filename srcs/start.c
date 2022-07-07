/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <fooswyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:08:41 by fooswyn           #+#    #+#             */
/*   Updated: 2022/05/23 21:53:15 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

int	is_number(char	*s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (!((s[i] >= '0' && s[i] <= '9') || (s[i] == '-')))
			return (0);
		i++;
	}
	return (1);
}

int	fill_stack_a(t_data *data)
{
	int		i;
	char	**new_argv;

	i = 1;
	if (data->argc == 2)
	{
		new_argv = ft_split(data->argv[1], ' ');
		while (new_argv[i - 1])
		{
			data->argv[i - 1] = new_argv[i - 1];
			i++;
		}
		i = 0;
	}
	if (!pars1(data) || !pars2(data))
		ft_error();
	while (data->argv[i] && is_number(data->argv[i]))
	{
		ft_lstadd_back(&data->a, ft_lstnew((int)long_atoi(data->argv[i])));
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
	data->commands = NULL;
	data->argc = argc;
	data->argv = argv;
	data->max = -2147483648;
	data->min = 2147483647;
	data->median = -2147483648;
	data->c[1] = "sa\n";
	data->c[2] = "sb\n";
	data->c[3] = "pa\n";
	data->c[4] = "pb\n";
	data->c[5] = "ra\n";
	data->c[6] = "rb\n";
	data->c[7] = "rra\n";
	data->c[8] = "rrb\n";
	data->c[9] = "ss\n";
	data->c[10] = "rr\n";
	data->c[11] = "rrr\n";
	return (data);
}
