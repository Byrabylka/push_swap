/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:05:14 by fooswyn           #+#    #+#             */
/*   Updated: 2021/10/25 18:49:12 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t count)
{
	size_t	len_s;
	size_t	len;

	len_s = ft_strlen(src);
	len = 0;
	while (*dst && count > 0)
	{
		dst++;
		count--;
		len++;
	}
	while (count > 1 && *src)
	{
		count--;
		*dst = *src;
		dst++;
		src++;
	}
	if (count == 1 || *src == 0)
		*dst = 0;
	return (len_s + len);
}
