/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 21:12:06 by fooswyn           #+#    #+#             */
/*   Updated: 2022/03/26 17:37:02 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
