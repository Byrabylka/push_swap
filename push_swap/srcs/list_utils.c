/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <fooswyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 20:57:00 by fooswyn           #+#    #+#             */
/*   Updated: 2022/05/18 20:57:11 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

t_stack	*ft_lstnew(int content)
{
	t_stack	*elem;

	elem = (t_stack *)malloc(sizeof(*elem));
	if (!elem)
		return (0);
	elem->next = 0;
	elem->content = content;
	return (elem);
}

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*new_list;

	new_list = *lst;
	if (new_list)
	{
		while (new_list->next)
			new_list = new_list->next;
		new_list->next = new;
	}
	else
		*lst = new;
}

void	ft_lstadd_front(t_stack **lst, t_stack *new)
{
	t_stack	*new_begin;

	if (*lst)
	{
		new_begin = new;
		new_begin->next = *lst;
		*lst = new_begin;
	}
	else
		*lst = new;
}

t_stack	*ft_lstlast(t_stack *lst)
{
	t_stack	*list;

	list = lst;
	if (!list)
		return (NULL);
	while (list->next)
		list = list->next;
	return (list);
}

int	ft_lstsize(t_stack *lst)
{
	int		count;
	t_stack	*list;

	count = 0;
	list = lst;
	while (list)
	{
		count++;
		list = list->next;
	}
	return (count);
}
