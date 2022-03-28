/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 21:11:41 by fooswyn           #+#    #+#             */
/*   Updated: 2022/03/26 17:35:06 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
