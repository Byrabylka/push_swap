/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 18:23:59 by fooswyn           #+#    #+#             */
/*   Updated: 2022/03/28 18:05:10 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_stack	*ft_lstmap(t_stack *lst, int (*f)(int))
{
	t_stack	*new_list;
	t_stack	*elem;

	new_list = 0;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		elem = ft_lstnew(f(lst->content));
		if (!elem)
		{
			ft_lstclear(&new_list);
			return (0);
		}
		ft_lstadd_back(&new_list, elem);
		lst = lst->next;
	}
	return (new_list);
}
