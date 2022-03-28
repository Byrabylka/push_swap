/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 18:32:41 by fooswyn           #+#    #+#             */
/*   Updated: 2021/10/25 19:22:31 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int		i;
	int		last_char;
	char	*copy_str;

	i = 0;
	last_char = -1;
	copy_str = (char *)str;
	while (str[i])
	{
		if (str[i] == (char )ch)
			last_char = i;
		i++;
	}
	if (str[i] == (char )ch)
		last_char = i;
	if (last_char == -1)
		return (0);
	while (last_char)
	{
		copy_str++;
		last_char--;
	}
	return (copy_str);
}
