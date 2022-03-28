/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 18:32:22 by fooswyn           #+#    #+#             */
/*   Updated: 2021/10/25 19:20:26 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	char	*str_copy;

	str_copy = (char *)str;
	while (*str_copy)
	{
		if (*str_copy == (char )ch)
			return (str_copy);
		str_copy++;
	}
	if (*str_copy == (char )ch)
		return (str_copy);
	return (0);
}
