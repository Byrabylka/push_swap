/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:47:18 by fooswyn           #+#    #+#             */
/*   Updated: 2022/03/28 18:06:31 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

long	long_atoi(char *str)
{
	long	n;
	int		i;
	int		sign;

	n = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f')
		i++;
	if (str[i] == '-')
		sign *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return (n * sign);
}

int	is_sorted(t_data *data)
{
	t_stack	*tmp;

	if (!data->a || data->b)
		return (0);
	tmp = data->a;
	while (tmp->next)
	{
		if (tmp->content > tmp->next->content)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

void	free_data(t_data *data)
{
	if (data)
	{
		if (data->a)
			ft_lstclear(&data->a);
		if (data->b)
			ft_lstclear(&data->b);
		free(data);
	}
}