/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 19:09:09 by fooswyn           #+#    #+#             */
/*   Updated: 2021/10/24 20:43:12 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	char	*str2;

	i = 0;
	str2 = malloc(ft_strlen(str) + 1);
	if (!str2)
		return (0);
	while (str[i] && str)
	{
		str2[i] = str[i];
		i++;
	}
	str2[i] = 0;
	return (str2);
}
