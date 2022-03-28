/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 21:11:49 by fooswyn           #+#    #+#             */
/*   Updated: 2022/03/28 18:02:07 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_stack **lst)
{
	t_stack	*list;
	t_stack	*buf;

	list = *lst;
	while (list)
	{
		buf = list;
		list = list->next;
		free(buf);
	}
	*lst = 0;
}
