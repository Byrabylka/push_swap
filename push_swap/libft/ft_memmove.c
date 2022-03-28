/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fooswyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 17:46:36 by fooswyn           #+#    #+#             */
/*   Updated: 2021/10/25 17:59:49 by fooswyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst2;
	unsigned char	*src2;

	dst2 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	if (!dst && !src)
		return (0);
	if (src < dst)
	{
		src2 += len - 1;
		dst2 += len - 1;
		while (len)
		{	
			len--;
			*dst2-- = *src2--;
		}
	}
	else
	{
		while (len--)
			*dst2++ = *src2++;
	}
	return (dst);
}
