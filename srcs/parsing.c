/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <fooswyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:58:50 by fooswyn           #+#    #+#             */
/*   Updated: 2022/05/23 21:58:48 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

int	pars1(t_data *data)
{
	int	i;
	int	j;

	i = 1;
	while (i < data->argc)
	{
		j = 0;
		while (data->argv[i][j])
		{
			if (!ft_isdigit(data->argv[i][j]) && data->argv[i][j] != '-')
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	pars2(t_data *data)
{
	int			i;
	long int	tmp;

	i = 1;
	while (i < data->argc)
	{
		tmp = long_atoi(data->argv[i]);
		if (tmp > 2147483647 || tmp < -2147483648)
			return (0);
		i++;
	}
	return (1);
}

int	pars3(t_data *data)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	tmp = data->a;
	while (tmp->next)
	{
		tmp2 = tmp->next;
		while (tmp2->next)
		{
			if (tmp->content == tmp2->content)
				return (0);
			tmp2 = tmp2->next;
		}
		if (tmp->content == tmp2->content)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

void	ft_error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
}
