/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:32:58 by fooswyn           #+#    #+#             */
/*   Updated: 2022/03/26 17:35:12 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
