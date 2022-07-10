/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <fooswyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 17:52:20 by fooswyn           #+#    #+#             */
/*   Updated: 2022/07/10 19:10:26 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

int	check_f(int a, int b)
{
	return ((a == 3 && b == 4) || (a == 4 && b == 3));
}

void	ft_out(t_stack *a)
{
	t_stack	*tmp;

	tmp = a;
	while (tmp)
	{
		printf("%d ", tmp->content);
		tmp = tmp->next;
	}
	printf("\n");
}

int	space_count(char *s)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == ' ')
			count++;
		i++;
	}
	return (count);
}
