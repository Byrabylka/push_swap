/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 21:11:11 by fooswyn           #+#    #+#             */
/*   Updated: 2022/03/26 17:30:53 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	char			*str;
	unsigned int	memor;
	unsigned int	i;

	memor = num * size;
	i = 0;
	str = malloc(memor);
	if (!str)
		return (0);
	while (memor)
	{
		str[i] = 0;
		i++;
		memor--;
	}
	return ((void *)str);
}
