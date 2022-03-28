/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:24:45 by fooswyn           #+#    #+#             */
/*   Updated: 2021/10/19 19:13:24 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	size_t			i;
	unsigned char	*str_copy;
	unsigned char	ch;

	i = 0;
	str_copy = (unsigned char *)arr;
	ch = (unsigned char)c;
	while (i < n)
	{
		if (*str_copy == ch)
			return ((unsigned char *)str_copy);
		str_copy++;
		i++;
	}
	return (0);
}
